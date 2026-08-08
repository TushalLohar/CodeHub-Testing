#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        
        vector<long long> nums(n);
        long long total_transfers = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            total_transfers += (nums[i] / x);
        }
        
        long long max_money = 0;
        
       
        for (int i = 0; i < n; i++) {
            long long money = nums[i] + (total_transfers - nums[i] / x) * y;
            max_money = max(max_money, money);
        }
        
        cout << max_money <<endl;
    }
    
    return 0;
}