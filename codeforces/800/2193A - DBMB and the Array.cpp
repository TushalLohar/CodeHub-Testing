#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , s ,x;
        cin>>n>>s>>x;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        int sum=0;
        for(int i=0; i<n; i++){
            sum = sum+nums[i];

        }
        if (sum <= s && (s - sum) % x == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
}