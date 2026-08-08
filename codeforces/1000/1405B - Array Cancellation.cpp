#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        long long pos=0; 
        long long rem_neg=0;
        for(int i=1; i<=n; i++){
            if(arr[i]>=0){
                pos+=arr[i];
            }
            else {
                //pos=4 , arr[i]=-3
                if(pos>=abs(arr[i])){
                    pos-= abs(arr[i]);   //pos=1 ,arr[i]=0
                }
                else{                    //pos=4 arr[i]=-5. , pos=0, arr[i]=-1 == rem_neg
                    rem_neg+= abs(arr[i]) - pos;
                    pos=0;
                }
            }
        }
        cout<<rem_neg<<endl;


    }
}