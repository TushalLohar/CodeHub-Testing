#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int i=0;
        if(s.size()>5){
            cout<<"NO"<<endl;
            
        }
        else if(s[i]=='T' && s[i+1]=='i' && s[i+2]=='m' && s[i+3]=='r' && s[i+4]=='u'){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

       


    }
}