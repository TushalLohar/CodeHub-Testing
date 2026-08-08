#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
 
 
        if(a-b == 1){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}