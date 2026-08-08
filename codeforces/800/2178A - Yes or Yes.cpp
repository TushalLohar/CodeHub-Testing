#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int yes=0;
        int no=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='Y'){
                yes++;

            }
            else{
                no++;
            }
        }

        // if(yes==s.size()){
        //     cout<<"NO"<<endl;
            
        // }
        // else if(no==s.size()){
        //     cout<<"YES"<<endl;
        // }
        // else if(yes>=no){
        //     cout<<"NO"<<endl;
        // }
        // else{
        //     cout<<"YES"<<endl;
        // }
        if(yes<=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}