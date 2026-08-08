#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        unordered_set<int> s;
        for(int m : arr) {
            s.insert(m);
        }

        bool found = false;
        for(int i = 0; i <= s.size(); i++) {  // check from 0 to set size
            if(s.find(i) == s.end()) {       // if i is not in set
                found = true;
                cout << i << endl;
                break;
            }
        }
        if(!found) {
            cout << s.size() << endl;
        }
    }
    return 0;
}
