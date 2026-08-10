#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n ,k;
	    cin>>n;
	    cin>>k;
	   
	    std::vector<int> c(n) ;
	    for(int i =0; i<n; i++){
	        cin>>c[i];
	    }
	    sort(c.rbegin() ,c.rend());
	    int sum =0;
	    for(int i=0; i<k;i++){
	        sum=sum+c[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;

}