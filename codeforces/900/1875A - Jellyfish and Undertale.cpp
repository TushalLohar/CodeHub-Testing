#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a , b , n;
        cin>>a>>b>>n;

        vector<long long> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        long long ans = b;
        for(int i=0; i<n ;i++){
            ans = ans+ min(nums[i], a-1);
        }
        cout<<ans<<endl;
    }
}