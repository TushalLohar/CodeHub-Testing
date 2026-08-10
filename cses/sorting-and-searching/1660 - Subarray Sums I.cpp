#include <bits/stdc++.h>

using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int sum=0;
    int count=0;
    int j=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        while(sum>x){
            sum-=nums[j];
            j++;
        }
        if(sum==x){
            count++;
        }


    }
    cout<<count<<endl;


}
//to print subarray the range will from nums[j] to nums[i]