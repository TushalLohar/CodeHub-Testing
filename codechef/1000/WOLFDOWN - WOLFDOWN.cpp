#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	   // int bird = 0;
	   // int wolf = 0;
	   // for(int i=0; i<n; i++){
	   //     if(s[i] == '0'){
	   //         bird++;
	   //     }
	   //     else{
	   //         wolf++;
	   //     }
	   // }
	    
	   // if(wolf == 0){
	   //     cout<<bird<<endl;
	   //     continue;
	   // }
	   // else if(bird == 0){
	   //     cout<<0<<endl;
	   //     continue;
	   // }
	    
	    int ans = 0;
	    for(int i=0; i<n; i++){
	        if(s[i] == '0'){
	            ans++;
	        }
	        else{
	            break;
	        }
	    }
	    
	    cout<<ans<<endl;
	    
	}
	return 0;

}