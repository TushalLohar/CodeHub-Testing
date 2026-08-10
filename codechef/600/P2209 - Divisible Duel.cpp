#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        int y;
        cin >> x >> y;
        vector < int > temp;
        
        for (int i = x; i <= y; i++) {
            if (i % x==0) {
                temp.push_back(i);
            }
        }
        int s_even = 0;
        int s_odd = 0;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] % 2==0) {
                s_even = s_even + temp[i];
            }
            else {
                s_odd = s_odd + temp[i];
            }
        }

        if (s_even >= s_odd) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }




    }

}