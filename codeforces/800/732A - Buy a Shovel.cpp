#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, r;
    cin>>k>>r;
    int answer=0;

    for(int i=1; i<1000; i++){
        if((k*i)%10==0){
            answer=i;
            break;
        }
        if((k*i)%10==r){
            answer=i;
            break;
        }
    }
    cout<<answer;
}