#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
const long long MOD = 1e9+7;
 
long long Helper(long long n, int k){
    if(k == 0){
        return 1;
    }
    long long ans = Helper(n, k-1);
    ans %= MOD;
    ans *= n;
    ans %= MOD;
    return ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
 
        cout<<Helper(n, k)<<endl;
 
    }
 
 
}