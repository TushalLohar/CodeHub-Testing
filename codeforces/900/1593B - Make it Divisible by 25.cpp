#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        string s;
        cin >> s;
 
        int n = s.length();
        int ans = n;
 
        vector<string> endings = {"00", "25", "50", "75"};
 
        for(string e : endings) {
            char second = e[1];
            char first = e[0];
 
            for(int j = n-1; j >= 0; j--) {
                if(s[j] == second) {
                    for(int i = j-1; i >= 0; i--) {
                        if(s[i] == first) {
                            int deletions = (n-1-j) + (j-1-i);
                            ans = min(ans, deletions);
                            break;
                        }
                    }
                }
            }
        }
 
        cout << ans << endl;
    }
}