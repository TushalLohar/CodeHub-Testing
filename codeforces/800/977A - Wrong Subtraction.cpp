#include <iostream>
using namespace std;
 
int main() {
    long long n;
    int x;
    cin >> n >> x;
    while (x--){
        if (n % 10 == 0){
            n /= 10;
        } 
        else{
            n -= 1;
        }
    }
    cout << n;
    return 0;
}