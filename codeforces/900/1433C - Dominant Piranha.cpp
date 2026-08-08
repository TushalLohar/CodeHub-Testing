#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long> nums(n);
        for(long long i=0; i<n; i++) cin>>nums[i];

        long long maxi = *max_element(nums.begin(), nums.end());
        long long answer= -1;
        for(int i=0; i<n; i++){
            if(nums[i]==maxi){
                bool left_smaller = (i > 0 && nums[i - 1] < maxi);
                bool right_smaller = (i < n - 1 && nums[i + 1] < maxi);

                if(left_smaller || right_smaller){
                    answer=i+1;
                    break;

                }
            }

        }
        cout<<answer<<endl;

    }
}