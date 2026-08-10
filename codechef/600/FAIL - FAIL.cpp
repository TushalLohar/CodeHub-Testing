#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int sum = 0;
        bool isValid = true;

        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;

            sum += num;
            int average = sum / (i + 1);

            if (average < 40) {
                isValid = false;

                // Consume remaining input for this test case
                for (int j = i + 1; j < N; j++) {
                    cin >> num;
                }

                break;
            }
        }

        cout << (isValid ? "Yes" : "No") << endl;
    }

    return 0;
}