#include <bits/stdc++.h>
using namespace std;

int mex(const vector<int>& arr) {
    unordered_set<int> s(arr.begin(), arr.end());
    int m = 0;
    while (s.count(m)) m++;
    return m;
}

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

        sort(a.begin(), a.end());

        int z = 0;
        while (z < n && a[z] == 0) z++;

        bool answer = true;
        for (int i = 1; i <= z + 1 && i < n; i++) {
            vector<int> left(a.begin(), a.begin() + i);
            vector<int> right(a.begin() + i, a.end());

            if (mex(left) == mex(right)) {
                answer = false;
                break;
            }
        }
        if(answer){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
