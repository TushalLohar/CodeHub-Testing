#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, m;
        cin >> a >> b >> c >> m;

        long long alice_days = m / a;
        long long bob_days = m / b;
        long long carol_days = m / c;

        long long ab = (a / gcd(a, b)) * b;
        long long ac = (a / gcd(a, c)) * c;
        long long bc = (b / gcd(b, c)) * c;

        long long abc = (ab / gcd(ab, c)) * c;

        long long alice_bob = m / ab;
        long long alice_carol = m / ac;
        long long bob_carol = m / bc;
        long long all_three = m / abc;

        long long alice_only = alice_days - alice_bob - alice_carol + all_three;
        long long bob_only = bob_days - alice_bob - bob_carol + all_three;
        long long carol_only = carol_days - alice_carol - bob_carol + all_three;

        long long AB_only = alice_bob - all_three;
        long long AC_only = alice_carol - all_three;
        long long BC_only = bob_carol - all_three;

        long long alice = 6*alice_only + 3*(AB_only + AC_only) + 2*all_three;
        long long bob   = 6*bob_only + 3*(AB_only + BC_only) + 2*all_three;
        long long carol = 6*carol_only + 3*(AC_only + BC_only) + 2*all_three;

        cout << alice << " " << bob << " " << carol << "\n";
    }

    return 0;
}