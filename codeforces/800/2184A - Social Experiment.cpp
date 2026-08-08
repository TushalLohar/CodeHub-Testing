#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans =-1;
        if(n==2){
            ans=2;
           
        }
        else if(n==3){
            ans=3;

        }
        else if(n%2==0){
            ans=0;
        }
        else{
            ans=1;
        }

        

        cout<<ans<<endl;
        

    }
}