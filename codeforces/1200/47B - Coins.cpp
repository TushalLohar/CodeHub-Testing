 #include <iostream>
using namespace std;
int main() {
    string s;
    int A = 0, B = 0, C = 0;
    for(int i = 0; i < 3; i++) {
        cin >> s;
        if(s[1] == '>') {
            if(s[0] == 'A') A++;
            if(s[0] == 'B') B++;
            if(s[0] == 'C') C++;
        }
        else {
            if(s[2] == 'A') A++;
            if(s[2] == 'B') B++;
            if(s[2] == 'C') C++;
        }
    }
    if(A < B && B < C) cout << "ABC";
    else if(A < C && C < B) cout << "ACB";
    else if(B < A && A < C) cout << "BAC";
    else if(B < C && C < A) cout << "BCA";
    else if(C < A && A < B) cout << "CAB";
    else if(C < B && B < A) cout << "CBA";
    else cout << "Impossible";
    return 0;
}