#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        int c1 = 0, c2 = 0, c3 = 0;
        int x;

        for (int i = 0; i < N; i++) {
            cin >> x;
            if (x == 1) c1++;
            else if (x == 2) c2++;
            else c3++;
        }

        int del2 = max(0, c2 - 1);

        int optionA = c3 + del2; 
        int optionB = c1 + del2; 

        cout << min(optionA, optionB) <<endl;
    }
}