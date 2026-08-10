#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	// your code goes here
	long long n , m;
	cin>>n>>m;
	long long maxi = 3*n;
	long long mini = n;
	
	if(m<=maxi && m>=mini && (n-m)%2==0){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
}

}