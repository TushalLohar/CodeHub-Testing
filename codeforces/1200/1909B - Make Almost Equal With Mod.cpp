#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> nums(n);
        for(auto &it:nums) cin>>it;
        for(int i=1;i<=61;i++){
            long long number = (1LL<<i);
            set<long long> st;
            for(int j=0;j<n;j++){
                st.insert(nums[j]%number);
            }
            if(st.size()==2){
                cout<<number<<endl;
                break;
            }

        }
    }
}