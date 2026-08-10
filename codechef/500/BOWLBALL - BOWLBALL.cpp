#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n, x , y;
	cin>>n>>x>>y;
	int count= 0;
	for(int i =0; i<n; i++){
	    int weight ;
	    cin>>weight;
	    
	    if(weight>=x && weight<=y){
	        count = count+1;
	    }
	}
	cout <<count<<endl;
	

}
}