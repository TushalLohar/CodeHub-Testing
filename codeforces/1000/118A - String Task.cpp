#include <iostream>
using namespace std;

int main() {
    string s, vowels = "aoyeui";
    cin >> s;

    for (char c : s) {
        c = tolower(c);
        if (vowels.find(c) == string::npos) {
            cout << "." << c;
        }
    }
    return 0;
}
