#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> nums(n);
        int maximum_elements = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> nums[i];
            maximum_elements = max(maximum_elements, nums[i]);
        }
        
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == maximum_elements) count++;
        }
        
        cout << count << endl;
    }
    
    return 0;
}