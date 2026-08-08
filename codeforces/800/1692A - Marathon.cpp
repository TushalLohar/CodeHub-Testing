#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a ,b,c,d;
        cin>>a>>b>>c>>d;
        // if(a>b && a>>c && a>d){
        //     cout<<0<<endl;
        //     continue;
        // }
        int count =0;

        if(b>a){
            count++;
        }
        if(c>a){
            count++;
        }
        if(d>a){
            count++;

        }
       cout<<count<<endl;

    }
}