#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long answer = 1;   

        while (n > 3) {
            n /= 4;         
            answer *= 2;        
        }

        cout << answer << "\n";
    }

    return 0;
}