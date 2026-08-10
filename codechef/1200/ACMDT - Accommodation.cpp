#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long b , g , x , y , n;
	    cin>>b>>g>>x>>y>>n;
	    
	    if(x+y>n){
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    long long minimum_rooms =(b+g+n-1)/n;
	    long long maximum_rooms=min(b/x, g/y);
	    
	    if(minimum_rooms<=maximum_rooms){
	        cout<<minimum_rooms<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    
	    
	}

}