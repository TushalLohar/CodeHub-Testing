#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        int odd=0;
        int even =0;
      


        for(int i=0; i<n; i++){
            long long x;
            cin>>x;
            if(x%2==0){
                even++;
            }
            else{
                odd++;
            }
        }

        if(even==0){
            cout<<odd-1<<endl;
        }
        else{
            cout<<odd+1<<endl;
        }
    }
}