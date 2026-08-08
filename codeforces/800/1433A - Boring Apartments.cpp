#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count =0;
        int x= n%10;
        while(n>0){
            int y=n%10;
            count++;
            n=n/10;

        }
        int sum =0;
        if(count==4){
            sum = sum+ (x-1)*10 +10;

        }
        else if(count==3){
             sum = sum+ (x-1)*10 +6;

        }
        else if(count==2){
             sum = sum+ (x-1)*10 +3;
        }
        else if(count==1){
             sum = sum+ (x-1)*10 +1;
        }

        cout<<sum<<endl;
        
    }
}