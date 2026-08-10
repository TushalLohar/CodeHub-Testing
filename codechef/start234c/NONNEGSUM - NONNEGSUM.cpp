#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    std::vector<int>nums(n);
	    vector<int> negative;
	    for(int i=0;i<n;i++){
	        cin>>nums[i];
	    }
	    int sum=0;
	    int count =0;
	    for(int x:nums){
	        if(x>=0){
	            sum+=x;
	            count++;
	        }
	        else{
	            negative.push_back(x);
	        }
	    }
	    sort(negative.begin(), negative.end(),greater<int>());
	    
	    
	    for(int x:negative){
	        if(sum+x>=0){
	            sum+=x;
	            count++;
	        }
	        else{
	            break;
	        }
	    }
	    
	    cout<<count<<endl;
	    
	}

}