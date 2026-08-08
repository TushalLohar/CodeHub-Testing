#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int area=(n*m)+1;
        int ans =(area/2);
        cout<<ans<<endl;
    }
}