#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int a , b , c ,d;
        cin>>a>>b>>c>>d;
    if(a>b) swap(a,b);
    if(c>d) swap(c,d);

    bool c_between_a_b =(a<c && c<b);
    bool d_between_a_b = (a<d && d<b);

    if(c_between_a_b ^ d_between_a_b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }
}