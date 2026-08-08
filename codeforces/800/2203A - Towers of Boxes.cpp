#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m, d;
        cin >> n >> m >> d;

        int max_height = d / m + 1;

        int answer = (n + max_height - 1) / max_height; 

        cout << answer << endl;
    }

    return 0;
}