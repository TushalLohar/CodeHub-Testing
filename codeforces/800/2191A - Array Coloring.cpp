#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<char> color(n);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                color[i] = 'R';
            else
                color[i] = 'B';
        }

        vector<pair<int, char>> cards(n);
        for (int i = 0; i < n; i++) {
            cards[i] = {a[i], color[i]};
        }

        sort(cards.begin(), cards.end());

        bool answer = true;
        for (int i = 1; i < n; i++) {
            if (cards[i].second == cards[i - 1].second) {
                answer = false;
                break;
            }
        }
        if (answer)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
