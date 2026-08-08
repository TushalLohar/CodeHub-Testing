#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        bool flag = true;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long mini = *min_element(arr.begin(), arr.end());
        vector<long long> temp;
        for(int i=0; i<n; i++){
            if(arr[i]%mini == 0){
                temp.push_back(arr[i]);
            }
        }
        sort(temp.begin(), temp.end());
        int j = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%mini == 0){
                arr[i] = temp[j];
                j++;
            }
        }
        flag = true;
        for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
}