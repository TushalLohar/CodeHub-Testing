#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B;
    cin >> A >> B;
    
    int result = A * B - min(A, B);
    cout << result << endl;

    return 0;

}