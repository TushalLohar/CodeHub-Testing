#include <bits/stdc++.h>
using namespace std;

int main() {
    string X, Y;
    cin >> X >> Y;

    map<string, int> order = {
        {"Ocelot", 1},
        {"Serval", 2},
        {"Lynx", 3}
    };

    if (order[X] >= order[Y])
        cout << "Yes";
    else
        cout << "No";

    return 0;
}