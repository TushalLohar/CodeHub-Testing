#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int x=0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
            
        }
        if(sum>=0){
            cout<<0<<endl;
        }
        else{
            x=(abs(sum)+n-1)/n;
            cout<<x<<endl;
            
        }
    
        
    }

}