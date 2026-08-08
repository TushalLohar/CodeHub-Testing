#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
long long Helper(long long ak){
    int maxi = -1, mini = 10;
    while(ak > 0){
        int d = ak%10;
        maxi = max(maxi, d);
        mini = min(mini, d);
        ak = ak/10;
    }
    return maxi*mini;
    
}
 
void solve(){
    long long a1, k;
    cin>>a1>>k;
    
    while(--k){
        long long next = a1 + Helper(a1);
        if(a1 == next){
            break;
        }
 
        a1 = next;
    }
    cout<<a1<<endl;
    
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
       solve();
        
    }
}