#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }

        int x = nums[0];
        int count =0;
        for(int i=1; i<n;i++){
            if(nums[i]<x){
                count++;
            }
            else{
                x =nums[i];
            }

        }
        cout<<count<<endl;
    }
}