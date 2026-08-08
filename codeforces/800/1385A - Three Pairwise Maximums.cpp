#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y && y==z){
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<" "<<endl;
            continue;

        }
    
        int maxi =max(x , max(y,z));
        int mini= min(x, min(y,z));
        int counter=(maxi==x)+(maxi==y)+(maxi==z);
        if(counter<2){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            cout<<mini<<" "<<maxi<<" "<<mini<<endl;
        }


    }
}
