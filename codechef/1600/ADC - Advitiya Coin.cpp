#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    
    while(t--) {
        long long n, k;
        cin >> n >> k;
        
        vector<long long> nums_p(n);
        for(int i = 0; i < n; i++) {
            cin >> nums_p[i];
        }
        
        int answer = 0;
        int i = 0;
        
        while(i < n) {
            long long min_price = nums_p[i];
            long long max_price = nums_p[i];
            int start = i;
            
       
            while(i < n) {
                min_price = min(min_price, nums_p[i]);
                max_price = max(max_price, nums_p[i]);
                
                // Found a winning trade
                if(max_price - min_price > k) {
                    answer++;
                    i++; 
                    break;
                }
                i++;
            }
            
           
            if(i == n && max_price - min_price <= k) {
                break;
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}