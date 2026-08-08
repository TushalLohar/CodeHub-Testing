#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         vector<int> arr;
        int place = 1;
        while(n>0){
            int digit =n%10;
            if(digit!=0){
                arr.push_back(digit*place);

            }
            n=n/10;
            place = place*10;
        }
        cout<<arr.size()<<endl;
        for(auto x: arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}