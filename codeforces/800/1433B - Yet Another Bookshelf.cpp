#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        
        int left=-1;
        int right=-1;
        int count=0;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                left=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==1){
                right=i;
                break;
            }
        }


        for(int i=left; i<=right; i++){
            if(nums[i]==0){
                count++;
            }
            
        }
        cout<<count<<endl;
        

    }
}