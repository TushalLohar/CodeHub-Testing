#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long prime_factors = n;
        long long answer = 1;

        for (long long i = 2; i * i <= prime_factors; i++) {
            if (prime_factors % i == 0) {
                answer *= i; 
                while (prime_factors % i == 0) {
                    prime_factors /= i;
                }
            }
        }
        if (prime_factors > 1) {
            answer *= prime_factors;
        }

        cout << answer << "\n";
    }

    return 0;
}

     