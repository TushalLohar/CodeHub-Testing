#include <bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int n=s.length();
	for(int i=1;i<n;i++){
		if(s[i-1]<s[i]-1){
			s[i]--;
			swap(s[i],s[i-1]);
			if(i>=2)i-=2;
		}
	}
	cout<<s<<"\n";
}
int main() {
	int t;
	cin>>t;
	while(t--) solve();
}
 