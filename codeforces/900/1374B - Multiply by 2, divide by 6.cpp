#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        long long moves =0;
        
        while(n%3==0){
            if(n%6!=0){
                n*=2;
                moves++;
            }
            n/=6;
            moves++;
        }
        if(n==1){
            cout<<moves<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

}