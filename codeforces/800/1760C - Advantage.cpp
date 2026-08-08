#include<bits/stdc++.h>
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
   long long largest = LLONG_MIN, slargest = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                slargest = largest;
                largest = arr[i];
            } 
            else if (arr[i] > slargest) {
                slargest = arr[i];
            }
        }
    long long ans=-1;


    for(int i=0;i<n; i++){
        if(arr[i]==largest){
            ans = arr[i]-slargest;
      
            cout<<ans<<" ";
        }
        else{
            ans=arr[i]-largest;
       
             cout<<ans<<" ";

        }

    }

     cout<<endl;
    }
}
