#include<iostream>
#include<vector>
#include<map>

using namespace std;
int main(){
    long long n , target;
    cin>>n>>target;

    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    long long ans=0;
    long long sum=0;
   
    map<long long,long long> mp;
     mp[0]=1;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        ans+=mp[sum-target];  // kya yeh sum-x map me hai if hai to +1 hoga warna +0
        
        mp[sum]++;  // mapping 
    }
    cout<<ans<<endl;
    //T.C = n+ nlogn ....nlogn

    //dount use unordred map use mapp only in prefix sum+ map


}