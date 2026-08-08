#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a , b;
    cin>>a>>b;
    

    if(b%a!=0){
        cout<<-1;
       return 0;
    }
    else if(a>b){
        cout<<-1;
      
    }
    long long x = b/a;
    int moves = 0;
    while(x%2==0){
        x = x/2;
        moves++;
    }
    while(x%3==0){
        x = x/3;
        moves++;
    }
    if(x!=1){
        cout<<-1;
    }
    else{
        cout<<moves;
    }

}