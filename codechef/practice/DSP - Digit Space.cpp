#include <bits/stdc++.h>
#include <iostream>
#include<set>
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

const int n= 1e7+1;
vector<int> spf(n);



int main() {
    fast_io;


for(int i=2;i<n;i++){
    spf[i]=i;
}
for(int i=2;i*i<n;i++){
    if(spf[i]==i){
        for(int j=i*i; j<n;j+=i){
            if(spf[j]==j){
                spf[j]=i;
            }
        }
    }
}




    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin>>x>>y;

        string s1 = to_string(x);
        string s2 = to_string(y);

        sort(all(s1));
        sort(all(s2));

        set<int> Dx , Dy;

       do{
            if(s1[0]=='0'){
                continue;
            }
            int num = stoi(s1);
            while(num>1){
                Dx.insert(spf[num]);
                num/=spf[num];

            }
       } while (next_permutation(s1.begin(),s1.end()));
       
       do{
             if(s2[0]=='0'){
                continue;

             }
             int num= stoi(s2);
             while(num>1){
                Dy.insert(spf[num]);
                num/=spf[num];
             }

       }while(next_permutation(s2.begin(), s2.end()));

       int ans=1;

       for(auto x:Dx){
               if(Dy.find(x)!=Dy.end()){
                    ans=max(ans,x);  // ans = x also works since set store in sortd order
                 
                }
       }

       cout<<ans<<endl;









        

    }

    return 0;
}