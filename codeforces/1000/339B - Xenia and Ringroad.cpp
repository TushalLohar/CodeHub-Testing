#include<iostream>
using namespace std;
int main(){
    long long n , m;
    cin>>n>>m;
    long long current =1;
    long long time =0;
    for(int i=0;i<m; i++){
        long long a;
        cin>>a;
        if(a>=current){
            time +=a-current;
        }
        else{
            time+=(n-current)+a;
        }
        current=a;

    }
    cout<<time<<endl;
}