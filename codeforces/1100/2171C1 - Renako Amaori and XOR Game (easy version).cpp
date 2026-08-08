#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int Count = 0;
        int last_index = 0;  

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                Count++;
                last_index = i + 1; 
            }
        }

        if (Count % 2 == 0) {
            cout << "Tie\n";
        } else {
            
            if (last_index % 2 == 1) {
                cout << "Ajisai"<<endl; 
            } else {
                cout << "Mai"<<endl;   
            }
        }
    }

    return 0;
}
