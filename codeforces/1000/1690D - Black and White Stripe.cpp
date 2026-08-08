#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n,k,mini=INT_MAX;
    string s;
    cin>>n>>k>>s;
    vector<int>prefix_sum(n+1,0);
    for(int i=0;i<n;i++) prefix_sum[i+1]=prefix_sum[i]+(s[i]=='W');
    for(int i=0;i<=n-k;i++)
    {
      int diff=prefix_sum[i+k]-prefix_sum[i];
      mini=min(mini,diff);
    }
    cout<<mini<<endl;
    
   }  
    
    
}