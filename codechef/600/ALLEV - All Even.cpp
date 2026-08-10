#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> nums(n);
	    for(int i=0; i<n ;i++){
	        cin>>nums[i];
	    }
	    int sum=nums[n-1];
	    for(int i=n-2; i>=0;i--){
	        sum= sum+ nums[i];
	        
	    }
	    if(sum%2==0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}

}