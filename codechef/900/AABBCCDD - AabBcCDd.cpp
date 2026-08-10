#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> frequency(26, 0);

        for (char &c : s) {
            c = tolower(c);
            frequency[c - 'a']++;
        }

       sort(frequency.begin(), frequency.end(),greater<int>() );

        int answer = frequency[0] + frequency[1];
        cout << answer <<endl;
    }

    return 0;
}