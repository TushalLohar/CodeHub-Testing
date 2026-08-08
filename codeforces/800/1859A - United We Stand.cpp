#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        vector<long long> b;
        vector<long long> c;

        long long maxi =*max_element(nums.begin(), nums.end());

      

        for(int i=0;i<n; i++){
            if(nums[i]!=maxi){
                b.push_back(nums[i]);
            }
            else{
                c.push_back(nums[i]);
            }
            
           
        }

        if(b.size()==0){
            cout<<-1<<endl;
            continue;
        }
        cout<<b.size()<<" "<<c.size();
        cout<<endl;
        for(int i=0; i<b.size();i++) cout<<b[i]<<" ";

        cout<<endl;
        for(int i=0; i<c.size();i++) cout<<c[i]<<" ";
        cout<<endl;
    }
}
