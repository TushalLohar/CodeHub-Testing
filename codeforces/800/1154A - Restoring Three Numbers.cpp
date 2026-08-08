#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> arr(4);
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];

    sort(arr.begin(), arr.end());
    int a =(arr[0]+ arr[1]-arr[2])/2;
    int b= (arr[0]-a);
    int c= (arr[1]-a);
    

    cout<<a<<" "<<b<<" "<<c;

}