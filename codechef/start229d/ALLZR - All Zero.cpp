#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int x,y,z;
	  cin>>x>>y>>z;
	  if(z%3==0 && (2*x+z/3==y)){
	      cout<<"Yes"<<endl;
	  }
	  else{
	      cout<<"No"<<endl;
	  }
	    
	}

}