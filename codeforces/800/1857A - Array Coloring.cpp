#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        int odd=0;
       for(int i=0; i<n ;i++){
        cin>>nums[i];
        if(nums[i]%2==1){
            odd++;
        }
       }

       if(odd%2==1){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }

    }
}
