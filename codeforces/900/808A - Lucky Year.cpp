#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long answerr = LLONG_MAX;

    for (int k = 0; k <= 9; k++) {
        long long power = 1;
        for (int i = 0; i < k; i++) power *= 10;

        for (int d = 1; d <= 9; d++) {
            long long lucky = d * power;
            if (lucky > n) {
                answerr = min(answerr, lucky);
            }
        }
    }

    cout << answerr - n << endl;
    return 0;
}
