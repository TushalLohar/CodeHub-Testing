#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count =0;
        int maxi=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                count++;
                 maxi = max(count , maxi);
                
            }
            
            else{
                count=0;
            }
           
        }

        cout<<maxi<<endl;

    }
}