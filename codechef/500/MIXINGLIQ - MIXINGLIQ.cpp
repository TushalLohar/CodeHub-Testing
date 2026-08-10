#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;

    while(T--) {
        int A, B;
        cin >> A >> B;

        int x = min(A, B / 2); // max orange syrup we can use
        int totalJuice = 3 * x; // total juice = x + 2*x
        cout << totalJuice << endl;
    }

    return 0;
}