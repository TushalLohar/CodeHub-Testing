#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ---------- FAST IO ----------
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

// ---------- TYPES ----------
#define endl '\n'
#define ll long long
#define ld long double

// ---------- SHORTCUTS ----------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second

// ---------- CONSTANTS ----------
const ll MOD = 1e9 + 7;
const ll INF = 1e18;




int get_mex(vector<int>& nums , int l , int r , int remaining , int n){
       vector<bool> seen(n,false);

       for(int i=l; i<=r;i++){
        seen[nums[i]]=true;
       }

       if(remaining !=-1){
        seen[remaining]=true;
       }

       for(int i=0;i<n;i++){
        if(!seen[i]){
            return i;
        }
       }

       return n;

}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int a;
        cin>>a;

        int n= 2*a;

        vector<int> nums(n);

        for(int &x:nums) cin>>x;

        vector<int> first(n ,-1) , second(n,-1);
        int answer=0;

        for(int i=0;i<n;i++){
            if(first[nums[i]]==-1){
                first[nums[i]]=i;
            }
            else{
                second[nums[i]]=i;
            }
        }

        vector<int> mid_sum(n);
        for(int i=0;i<n;i++){
            mid_sum[i]=first[nums[i]]+second[nums[i]];
        }


        for(int x=0;x<2*a;x++){

            int center=2*x;
            int left =x;

            while(left>0 && mid_sum[left-1]==center){
                left--;
            }

            if(x>0){
                int mex= get_mex(nums , left , x-1 , nums[x],a);
                answer= max(answer , mex);

            }

            if(x+1<2*n && mid_sum[x]==2*x+1){
                center=2*x+1;

                left=x;

                while(left>0 && mid_sum[left-1]== center){
                    left--;
                }
                int mex = get_mex(nums , left , x , -1 , a);
                answer= max(answer ,mex);
            }
        }
        cout<<answer<<endl;
    }

    return 0;
}