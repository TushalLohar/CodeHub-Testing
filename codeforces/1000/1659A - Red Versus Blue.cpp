#include<bits/stdc++.h>
using namespace std;
int main()
{
   int p;
   cin>>p;
   while(p--)
   {
      int n,r,b;
      cin>>n>>r>>b;
      int lenght_of_red=r/(b+1);
      int lenght_of_extra =r%(b+1);
      string s="";
      for(int time=1;time<=b+1;time++)
      {
           for(int i=0;i<lenght_of_red;i++) s+="R";
           if(lenght_of_extra>0)
           {
               s+="R";
               lenght_of_extra--;
           }
           if(time!=b+1) s+="B";
      }
      cout<<s<<endl;
   }
}