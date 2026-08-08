#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
int main(){
    int x;
        cin>>x;
        string s;
        cin>>s;
        
        for(int i=0; i<x-1; i++){
            if(s[i] != s[i+1]){
                cout<<"Yes"<<endl;
                cout<<s[i]<<s[i+1]<<endl;
                return 0;
            }
        }
        
        cout<<"No"<<endl;
 
}