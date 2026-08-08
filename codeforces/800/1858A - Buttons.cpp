
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     long long a , b , c;
     cin>>a>>b>>c;
     if(c%2!=0 && b>a){
        cout<<"Second"<<endl;
        
     }else if(c%2!=0 && a>=b){
        cout<<"First"<<endl;
     }
     else if(c%2==0 && a>b){
        cout<<"First"<<endl;
     }
     else{
        cout<<"Second"<<endl;
     }
    }
}