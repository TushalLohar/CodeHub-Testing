#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr.rbegin(),arr.rend());
        bool ok=false;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                ok=true;
                break;
            }
        }
        if(ok){
            cout<<-1<<"\n";
        }
        else{
            for(int x:arr){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}