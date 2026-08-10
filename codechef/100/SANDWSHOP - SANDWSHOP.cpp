#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int a , b , c;
    cin>>a>>b>>c;
   // a = 100<=a<=1000;
   // b = 40<=b<=200;
    //c = 40<=c<=200;
    int profit = a - (b+c);
    cout<<profit<<endl;
    return 0;

}