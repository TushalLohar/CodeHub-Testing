#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , a , b;
	cin>>n;
	cin>>a;
	cin>>b;
	int payed = a*b;
	int remaining = n-payed;
	cout<<remaining;
}