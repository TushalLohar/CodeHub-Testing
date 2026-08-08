#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s , r;
        cin>>s>>r;

        for(int i=0; i<n; i++){
            if(s[i]=='G') s[i]='B';
            if(r[i]=='G') r[i]='B';
        }

        if(s==r){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        

        
    }
}