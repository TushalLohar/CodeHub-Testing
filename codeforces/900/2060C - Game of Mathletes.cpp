#include <bits/stdc++.h>
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

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {

        int n ,k;
        cin>>n>>k;
        vector<int> nums(n);
        map<int,int> freq;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            freq[nums[i]]++;
        }

        int answer =0;
        for(auto it: freq){
            int x= it.ff;
            int y=k-x;

            if(!freq.count(y)) continue;

            if(x==y){
                answer+=freq[x]/2;
            }
            else if(x<y){
                answer+=min(freq[x],freq[y]);

            }


        }

        cout<<answer<<endl;



    }

    return 0;
}