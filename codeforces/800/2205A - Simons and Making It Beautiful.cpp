#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        int maximum = *max_element(nums.begin(),nums.end());
        int index=0;
        for(int i=0;i<n;i++){
            if(nums[i]==maximum){
                index=i;
                break;
            }
        }
        
        swap(nums[0],nums[index]);

        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;

    }
}