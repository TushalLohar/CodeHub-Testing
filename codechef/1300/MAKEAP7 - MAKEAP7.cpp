#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int size;
        cin >> size;

        vector<long long> array(size);
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }

     
        sort(array.begin(), array.end());

   
        long long commonDifference = array[1] - array[0];
        for (int i = 2; i < size; i++) {
            long long currentDiff = array[i] - array[i - 1];
            commonDifference = __gcd(commonDifference, currentDiff);
        }

        long long totalElements =
            (array[size - 1] - array[0]) / commonDifference + 1;


        long long minimumOperations = totalElements - size;

        cout << minimumOperations << "\n";
    }

    return 0;
}