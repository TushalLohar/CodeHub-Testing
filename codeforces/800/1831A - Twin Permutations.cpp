#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin>>n;
        vector<long long > nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        
        for(int i=0; i<n; i++){
            cout<<n+1-nums[i]<<" ";
        }
        cout<<endl;
        
    }
    
}

