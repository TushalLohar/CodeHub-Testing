#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string result;
    result += s[0];
 
    for (int i = 1; i < s.size(); i++) {
        if (!(s[i] == '/' && s[i - 1] == '/')) {
            result += s[i];
        }
    }
 
    if (result.size() > 1 && result.back() == '/') {
        result.pop_back();
    }
 
    cout << result << endl;
    return 0;
}