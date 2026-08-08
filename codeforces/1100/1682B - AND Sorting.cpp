#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans = (1<<30) -1;
        for(int i=0; i<n; i++){
            if(arr[i] != i){
                ans &= i;
            }
        }
        
        cout<<ans<<endl;
    }
}