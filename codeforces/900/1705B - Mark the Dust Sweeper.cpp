#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n+1);
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        long long count_Z =0;
        long long sum =0;
        bool flag = false;
        for(int i =1; i<=n-1; i++){
            sum+=arr[i];
            if(arr[i]>0) flag = true;
            if(arr[i]==0 && flag==true) count_Z++;

        }

        

        cout<<sum + count_Z<<endl;
        
    }
}