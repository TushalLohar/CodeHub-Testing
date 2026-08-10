#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
	    
	   
	    vector<int> numsA(n);
	    for(int i=0; i<n;i++){
	        cin>>numsA[i];
	    
	    }
	    vector<int> numsB(n);
	    for(int i=0; i<n ;i++){
	        cin>>numsB[i];
	       
	    }
	    
	  

        int totalWin = 0;
        int minLoss = INT_MAX;

        for (int i = 0; i < n; i++) {
            totalWin+=numsA[i];
             minLoss = min(minLoss, numsA[i] - numsB[i]);

        }
        cout<<totalWin-minLoss<<endl;
	    
	  
	    
	    
	    
	}

}