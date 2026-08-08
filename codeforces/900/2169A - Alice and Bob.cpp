#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        int left = 0;  
        int right = 0; 

        for(int i=0;i<n;i++){
            if(arr[i] < a){
                left++;
            }
            else if(arr[i] > a){
                right++;
            }
        }

        int b;
        if(left > right){
            b = a - 1;     
        }
        else{
            b = a + 1;    
        }

        cout << b << endl;
    }
}
