#include <bits/stdc++.h>
#include<set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        set<int> s;
        for (long long i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x); 
        }

        int answer = 0;

        for (int x : s) {
            if (!s.count(x - 1)) {
                int current = x;
                int len = 0;

                while (s.count(current)) {
                    len++;
                    current++;
                }

                answer = max(answer, len);
            }
        }

        cout << answer <<endl;
    }
    return 0;
}
