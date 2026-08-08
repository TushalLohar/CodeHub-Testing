#include <bits/stdc++.h>

using namespace std;
#define endl '\n'


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int> nums(x);
        for(int i=0; i<x; i++){
            cin>>nums[i];
        }

        sort(nums.begin(), nums.end());
        bool ans = true;
        for(int i=1; i<x-1; i+=2){
            if(nums[i] == nums[i+1]){
                continue;
            }
            else{
                ans = false;
                break;
            }
        }

        if(ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}