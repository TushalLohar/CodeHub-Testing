#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin >> t;
	while(t --) {
		int n, x1, x2, k;
		cin >> n >> x1 >> x2 >> k;
		if(n == 2 || n == 3) cout << 1 << endl;
		else {
			int dis = min(abs(x1 - x2), n - abs(x1 - x2));
			cout << dis + k << endl;
		}
	}
	return 0;
}