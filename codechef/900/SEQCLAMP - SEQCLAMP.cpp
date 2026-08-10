#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    long long x=1000000000;
	    for(int i=0;i<n;i++){
	        int a , b;
	        cin>>a>>b;
	        if(x<a) x=a;
	        if(x>b) x=b;
	    }
	    
	    cout<<x<<endl;
	}

}