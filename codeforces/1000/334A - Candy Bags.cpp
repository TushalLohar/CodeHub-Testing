#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int l = 1, r = n * n;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            cout << l << " " << r << " ";
            l++;
            r--;
        }
        cout << "\n";
    }
 
    return 0;
}