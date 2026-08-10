#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        int max_size = -1;
        int brick_number = -1;

        for (int i = 1; i <= N; i++) {
            int size;
            cin >> size;
            if (size > max_size) {
                max_size = size;
                brick_number = i;
            }
        }

        cout << brick_number << "\n";
    }
    return 0;

}