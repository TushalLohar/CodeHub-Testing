#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
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
        bool ans_even =true;
        int even = nums[0]%2;
          int odd = nums[1]%2;
        bool ans_odd=true;
        for(int i=0; i<n; i++){
             if(i % 2 == 0 && nums[i]%2 != even){
                ans_even = false;
            }
            if(i % 2 == 1 && nums[i]%2 != odd){
                ans_odd = false;
            }
            
        }

      
        

        if(ans_even && ans_odd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        

    }
}