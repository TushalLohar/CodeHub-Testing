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

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {

        string s;
        cin>>s;
        
        bool ans = false;

        for(int i=0;i<2;i++){
            char start = (i==0?'a':'b');

            vector<int> nums;

            for(int j=0;j<s.size();j++){
                char want = (j%2==0? start:(start=='a'?'b':'a'));

                if(s[j]!=want){
                    nums.pb(j);
                }
            }

            if(nums.empty()){
                ans =true;
                break;
            }

            bool continous=true;
            for(int k=1;k<nums.size();k++){
                if(nums[k]!=nums[k-1]+1){
                    continous=false;
                    break;
                }


            }

            if(!continous) continue;

            bool good = true;
            for(int i = nums[0];i<nums.size();i++){
                if(s[i]==s[i+1]){
                    good=false;
                    break;
                }
            }

            if(good){
                ans = true;
                break;
            }
        }

        cout<<(ans? "YES\n":"NO\n");

    }

    return 0;
}