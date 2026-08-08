#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> chessboard(8);
        for (int i = 0; i < 8; i++) {
            cin >> chessboard[i];
        }

        for (int i = 1; i <= 6; i++) {
            for (int j = 1; j <= 6; j++) {
                if (chessboard[i][j] == '#' &&
                    chessboard[i-1][j-1] == '#' &&
                    chessboard[i-1][j+1] == '#' &&
                    chessboard[i+1][j-1] == '#' &&
                    chessboard[i+1][j+1] == '#') {

                  
                    cout << i + 1 << " " << j + 1 << "\n";
                }
            }
        }
    }
    return 0;
}
