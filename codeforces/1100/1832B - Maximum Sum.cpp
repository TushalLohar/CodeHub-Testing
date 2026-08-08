#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        long long sum = 0;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        for(int i=1; i<n; i++){
            arr[i] = arr[i-1] + arr[i];
        }
        
        long long ans = 0;
        for(int i=0; i<=k; i++){
            int right = k-i;
            int left = 2*i;
            sum = arr[n-right-1] - (left == 0 ? 0 : arr[left-1]);
            ans = max(sum, ans);
        }
        cout<<ans<<endl;
 
    }
 
}