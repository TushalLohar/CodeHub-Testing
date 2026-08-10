#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        int count = 0;

        if (x >= 50) count++;
        if (y >= 50) count++;
        if (z >= 50) count++;

        if (count >= 2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}