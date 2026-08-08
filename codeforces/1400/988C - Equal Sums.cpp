#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int k;
    cin >> k;
 
    unordered_map<long long, pair<int,int>> mp;
 
    for(int i = 1; i <= k; i++) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        long long sum = 0;
 
        for(int j = 0; j < n; j++) {
            cin >> a[j];
            sum += a[j];
        }
 
        for(int j = 0; j < n; j++) {
            long long new_sum = sum - a[j];
 
            if(mp.count(new_sum)) {
                auto prev = mp[new_sum];
                if(prev.first != i) {
                    cout << "YES\n";
                    cout << prev.first << " " << prev.second << "\n";
                    cout << i << " " << j + 1 << "\n";
                    return 0;
                }
            } else {
                mp[new_sum] = {i, j + 1};
            }
        }
    }
 
    cout << "NO\n";
    return 0;
}