#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<long long> pref_type1(n,0),pref_type2(n,0);
    pref_type1[0] = nums[0];
    for(int i=1;i<n;i++){
        pref_type1[i]=pref_type1[i-1]+nums[i];

    }
    sort(nums.begin(),nums.end());
    pref_type2[0] = nums[0];
    for(int i=1;i<n;i++){
        pref_type2[i]=pref_type2[i-1]+nums[i];
    }

    long long q;
    cin>>q;

    while(q--){
        int type , l ,r;
        cin>>type>>l>>r;
        l--;
        r--;
        long long ans=0;

        if(type==1){
            ans= pref_type1[r]-((l==0)?0:pref_type1[l-1]);
            cout<<ans<<endl;

        }
        else{
            ans= pref_type2[r]-((l==0)?0:pref_type2[l-1]);
            cout<<ans<<endl;
        }
    }

}