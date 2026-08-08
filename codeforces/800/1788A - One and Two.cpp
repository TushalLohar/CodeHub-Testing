#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count2=0;

        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==2) count2++;
        }
        if(count2%2!=0){
            cout<<-1<<endl; 
            continue;
        } 

        if(count2==0){
            cout<<1<<endl; 
            continue;
        }
        
        int need = count2/2;
        int current_2=0;

        for(int i=0; i<n-1; i++){
            if(arr[i]==2) current_2++;
            if(current_2==need){
                cout<<i+1<<endl;
                break;
            }
        }
       
    }
}