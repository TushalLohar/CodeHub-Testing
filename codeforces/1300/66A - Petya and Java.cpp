#include <iostream>
using namespace std;
 
int main() {
    string n;
    cin >> n;
 
    if (n.size() < 3 || (n.size() == 3 && n <= "127")) {
        cout << "byte\n";
    } 
    else if (n.size() < 5 || (n.size() == 5 && n <= "32767")) {
        cout << "short\n";
    } 
    else if (n.size() < 10 || (n.size() == 10 && n <= "2147483647")) {
        cout << "int\n";
    } 
    else if (n.size() < 19 || (n.size() == 19 && n <= "9223372036854775807")) {
        cout << "long\n";
    } 
    else {
        cout << "BigInteger\n";
    }
 
    return 0;
}