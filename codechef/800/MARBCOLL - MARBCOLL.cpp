#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        int freq[101] = {0};  // Marble types range from 1 to 100

        for (int i = 0; i < N; i++) {
            int type;
            cin >> type;
            freq[type] = 1;  // Mark this type as collected
        }

        int notCollected = 0;
        for (int i = 1; i <= M; i++) {
            if (freq[i] == 0) {
                notCollected++;
            }
        }

        cout << notCollected << endl;
    }

    return 0;
}