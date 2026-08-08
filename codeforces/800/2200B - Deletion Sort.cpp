#include <bits/stdc++.h>
using namespace std;
 
 
int  solve(vector<int>&a,int n) {
    
      if(is_sorted(a.begin(),a.end())) return n;
      else return 1;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;  
 
    while (t--) {
        
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        cout<<solve(a,n)<<"\n";
    }
 
    return 0;
}