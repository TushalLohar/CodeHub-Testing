#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= 2 * n; i++) {
        int level = n - abs(n - i);

       
        for (int s = 0; s < abs(n - i); s++) {
            cout << "  ";
        }

 
        for (int x = 0; x <= level; x++) {
            cout << x;
            if (x < level) cout << " ";
        }


        for (int x = level - 1; x >= 0; x--) {
            cout << " " << x;
        }

        cout << "\n";
    }


}
