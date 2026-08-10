#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
	// your code goes here
	int n;
	cin>>n;
	string s;
	cin>>s;
    unordered_map<char,int> mpp;
	

	for(int i=0; i<n; i++){
        mpp[s[i]]++;
	    
	}
    bool ans=false;
    for(auto it : mpp){
        if(it.second>=2){
            ans=true;
            break;
        }
    }
    if(ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


}
}