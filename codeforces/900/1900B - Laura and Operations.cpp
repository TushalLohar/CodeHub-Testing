#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    int p=0,q=0,r=0;
    if((b&1)==(c&1)) p=1;
    if((a&1)==(c&1)) q=1;
    if((a&1)==(b&1)) r=1;
    cout<<p<<" "<<q<<" "<<r<<"\n";
  }
}