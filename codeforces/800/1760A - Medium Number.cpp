#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b,c;
        cin>>a>>b>>c;
      
    int maxi = max(a, max(b, c));
    int mini = min(a, min(b, c));
        // if(maxi==a && mini==b){
        //     cout<<c<<endl;
        // }
        // else if(maxi==a && mini==c){
        //     cout<<b<<endl;
        // }
        // else if(maxi==b && mini==c){
        //     cout<<a<<endl;
        // }
        // else if(maxi==b && mini==a){
        //     cout<<c<<endl;
        // }
        // else if(maxi==c && mini==a){
        //     cout<<b<<endl;
        // }
        // else if(maxi==c && mini==b){
        //     cout<<a<<endl;
        // }

        int median = a+b+c-maxi-mini;
        cout<<median<<endl;
    
    }
}