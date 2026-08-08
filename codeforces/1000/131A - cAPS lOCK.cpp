#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    bool x =true;
    for(int i =1; i<s.size(); i++){
        if(islower(s[i])){
            x = false;
        }
    }

    if(x){
        for(int i=0; i<s.size(); i++){
            if(islower(s[i])){
                s[i]=toupper(s[i]);
            }
            else{
                s[i]=tolower(s[i]);
            }
        }
    }
    cout<<s;
}