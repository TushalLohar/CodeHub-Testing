#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k;
        cin>>n>>k;
        vector<long long> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];

        sort(nums.begin(), nums.end());

        long long ans =1;
        long long largest_length = 1; 
        for(int i=1; i<n ; i++){
            if(abs(nums[i]-nums[i-1]<=k)){
                ans++;
            }
            else{
                ans=1;
            }
            largest_length= max(largest_length , ans);
        }
        cout<<n-largest_length<<endl;
    }
}