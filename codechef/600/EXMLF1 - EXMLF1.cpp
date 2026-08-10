#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int winner = 1;      
        long long bestSpeed = -1;

        for (int i = 1; i <= N; i++) {
            long long d, t;
            cin >> d >> t;

            long long speed = d / t;   
            if (speed > bestSpeed) {
                bestSpeed = speed;
                winner = i;
            }
        }

        cout << winner << "\n";
    }
}