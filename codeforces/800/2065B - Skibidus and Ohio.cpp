#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        bool hasequal=false;
        for(int i=0; i<(int)s.size()-1;i++){
            if(s[i]==s[i+1]){
                hasequal=true;
                break;
            }
        }

        if(hasequal) cout<<1<<endl;
        else cout<<s.size()<<endl;
    }
}