#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
    
        vector<int> nums(n+2);
        for(int i=0; i<=n;i++){
            cin>>nums[i];
        }
        vector<int> ans(n+1);
        int maxi = -1;
        int answer= INT16_MAX;
        
        for(int i=0; i<n; i++){
            maxi = max(nums[i],nums[i+1]);
            answer= min(answer , max(nums[i], nums[i+1]));
            

        }


        cout<<answer<<endl;

	    
	}

}