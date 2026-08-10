#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
    int t;
    cin >> t;

    while (t--) {
        long long n, q;
        cin >> n >> q;

        long long answer = (n + q) / (q + 1);  
        cout << answer / 2 << endl;
    }

}