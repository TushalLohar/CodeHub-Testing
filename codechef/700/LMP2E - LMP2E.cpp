#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 0;
        bool wearing = false; 

        for (int i = 0; i < n; i++) {
            if (arr[i] < a) {
               
                if (!wearing) {
                    count++;
                    wearing = true;
                }
            } 
            else if (arr[i] > b) {
              
                wearing = false;
            }
    
        }

        cout << count << endl;
    }
    return 0;
}