#include <bits/stdc++.h>
using namespace std;

int main() {
  

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

     
        if (n < 4 || n % 2 != 0) {
            cout << -1 <<endl;
            continue;
        }

        long long min = (n + 5) / 6; 
        long long max = n / 4;

        if (min > max)
            cout << -1 << endl;
        else
            cout << min << " " << max << '\n';
    }
    return 0;
}
