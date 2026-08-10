#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<long long> arr(N);
        long long total_sum = 0;
        
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
            total_sum += arr[i];
        }
        
     
        long long min_val = arr[0] + 2 * (total_sum - arr[0]);
        
       
        long long max_val = 0;
        long long power_of_two = 1;  
        
        for (int i = 0; i < N; i++) {
            max_val += arr[i] * power_of_two;
            power_of_two *= 2;  
        }
        
        cout << min_val << " " << max_val << "\n";
    }
    
    return 0;
}