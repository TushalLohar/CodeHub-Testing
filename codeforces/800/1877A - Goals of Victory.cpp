#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
         for(int i=0; i<n-1;i++){
            cin>>nums[i];
         }

         int sum=0;
         for(int i=0; i<n-1; i++){
            sum =sum+nums[i];

         }
         if(sum>0){
            cout<<-sum<<endl;
         }
         else if(sum<0){
            cout<<-(sum)<<endl;

         }
         else{
             cout<<sum<<endl;
         }
    }
}