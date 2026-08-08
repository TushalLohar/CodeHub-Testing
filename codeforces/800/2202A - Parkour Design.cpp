#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long x, y;
        cin >> x >> y;

        long long main_condition = x - 2*y;

        if(main_condition < 0 || main_condition % 3 != 0) {
            cout << "NO"<<endl;
            continue;
        }

        long long k = main_condition / 3;

        long long c_greter_then = max(0LL, -y);
        long long c_less_then = k / 2;

        if(c_greter_then <= c_less_then)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}