#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int pair2=y/2;
	    int pair1=0;
	    pair1=min(x,z);
	    int sum =pair1+pair2;
	    
	    cout<<sum<<endl;
	    
	}

}