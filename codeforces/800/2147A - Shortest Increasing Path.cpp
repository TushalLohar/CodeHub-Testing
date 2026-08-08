#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,t;
	cin>>t;
	while(cin>>a>>b){
		if(a<b)
            cout<<"2\n";
		else if(a==b||b==1||b==a-1)
            cout<<"-1\n";
		else 
            cout<<"3\n"; 
	}
}