#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        
        sort(A.rbegin(), A.rend()); // sort descending
        
        int best_rank = N + 1; // worst possible initially
        
        for (int i = 0; i <= K; i++) {
            int newX = X + 100 * i; // after i sabotages
            
            // make top i opponents 0
            int count = 0;
            for (int j = i; j < N; j++) {
                if (A[j] > newX) count++;
            }
            
            int rank = count + 1;
            best_rank = min(best_rank, rank);
        }
        
        cout << best_rank << endl;
    }
    return 0;
}