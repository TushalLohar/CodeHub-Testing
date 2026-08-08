#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long sum =0;
        long long min = *min_element(arr.begin(), arr.end());
        for(int i=0; i<n; i++){
            if(arr[i]>min){
                sum= sum+arr[i]-min;
            }
        }

        cout<<sum<<endl;
    }
}