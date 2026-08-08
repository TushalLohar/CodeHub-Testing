#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

int getLayers(int white, int dark, bool start_White) {
    int layers = 0;
    int size = 1;
    bool isWhite = start_White;

    while (true) {
        if (isWhite) {
            if (white < size) break;
            white -= size;
        } else {
            if (dark < size) break;
            dark -= size;
        }

        layers++;
        size *= 2;
        isWhite = !isWhite; 
    }

    return layers;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int first = getLayers(a, b, true);   
        int second = getLayers(a, b, false);  

        cout << max(first, second) << endl;
    }

    return 0;
}
