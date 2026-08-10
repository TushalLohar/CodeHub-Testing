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
	    for(int i=0;i<n;i++){
	        cin>>nums[i];
	    }
	    
	    int maxi = *std::max_element(nums.begin(), nums.end());
	    int mini = *std::min_element(nums.begin(), nums.end());
	    
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(nums[i]>mini && nums[i]<maxi){
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	    
	    
	}

}