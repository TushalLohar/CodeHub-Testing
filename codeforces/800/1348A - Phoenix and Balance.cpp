#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        arr[i] = (1<<(i+1));
    }
 
long long maxi = arr[n-1];
long long mini = 0;
for(int i=0; i<n/2-1; i++){
    maxi += arr[i];
}
for(int i=n/2-1; i<n-1; i++){
    mini += arr[i];
}
 
cout<<maxi-mini<<endl;
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}