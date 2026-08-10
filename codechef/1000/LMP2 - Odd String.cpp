#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> freq;
        bool ok = true;

        for (char ch : s) {
            freq[ch]++;
            if (freq[ch] >= 3) {
                ok = false;
                break;
            }
        }

        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}