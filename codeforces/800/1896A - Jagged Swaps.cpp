#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int mini = *min_element(arr.begin(), arr.end());
        int i=0;
        if(arr[i]==mini){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }
}