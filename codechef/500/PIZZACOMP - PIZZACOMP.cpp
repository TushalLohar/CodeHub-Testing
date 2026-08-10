#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a , b;
	    cin>>a>>b;
	    int x= 100*b;
	    int y= 225*a;
	    if(x>y){
	        cout<<"Small"<<endl;
	    }
	    else if(y>x){
	        cout<<"Large"<<endl;
	    }
	    else{
	        cout<<"Equal"<<endl;
	    }
	}

}