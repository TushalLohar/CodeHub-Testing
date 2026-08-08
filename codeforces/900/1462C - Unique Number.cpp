#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
 
        if (x > 45) {
            cout << -1 << "\n";
            continue;
        }
 
        vector<int> digits;
        for (int i = 9; i >= 1; i--) {
            if (x >= i) {
                digits.push_back(i);
                x -= i;
            }
        }
 
        for (int i = digits.size() - 1; i >= 0; i--) {
            cout << digits[i];
        }
        cout << "\n";
    }
  
}