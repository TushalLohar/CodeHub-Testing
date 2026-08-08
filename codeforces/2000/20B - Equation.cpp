#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double A, B, C;
    cin >> A >> B >> C;
 
    if (A == 0 && B == 0 && C == 0) {
        cout << "-1" << endl;
    }
    else if (A == 0 && B == 0 && C != 0) {
        cout << "0" << endl;
    }
    else if (A == 0 && B != 0) {
        double x = -C / B;
        cout << "1" << endl;
        cout << fixed << setprecision(10) << x << endl;
    }
    else {
        double D = B * B - 4 * A * C;
        if (D > 0) {
            double x1 = (-B - sqrt(D)) / (2 * A);
            double x2 = (-B + sqrt(D)) / (2 * A);
            if (x1 > x2) swap(x1, x2);
            cout << "2" << endl;
            cout << fixed << setprecision(10) << x1 << " " << x2 << endl;
        }
        else if (D < 0) {
            cout << "0" << endl;
        }
        else {
            double x = -B / (2 * A);
            cout << "1" << endl;
            cout << fixed << setprecision(10) << x << endl;
        }
    }
 
    return 0;
}