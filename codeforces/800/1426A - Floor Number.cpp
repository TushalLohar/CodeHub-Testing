#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n , x;
	    cin>>n>>x;
	    
	    if(n<=2){
	        cout<<1<<endl;
	        continue;
	    }
	    int ans =1;
	    n=n-2;
	    int floor = (n+x-1)/x;
	    ans = ans+floor;
	    
	    cout<<ans<<endl;
	    
	}

}