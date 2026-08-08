#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a ,b;
        cin>>a>>b;
        int side = min(max(2*a,b), max(a,2*b));
        cout<<pow(side,2)<<endl;
    }
}