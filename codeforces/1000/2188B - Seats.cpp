#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        bool Student = false;
        for (char c : s) {
            if (c == '1') {
                Student = true;
                break;
            }
        }
     
        if (!Student) {
            cout << (n + 2) / 3 <<endl;
            continue;
        }
        
        int current = 0;
        for (char c : s) {
            if (c == '1') current++;
        }
        
        int additional = 0;
        
        int i = 0;
        while (i < n) {
            if (s[i] == '0') {
           
                int j = i;
                while (j < n && s[j] == '0') {
                    j++;
                }
                
                int length = j - i;
                bool at_start = (i == 0);
                bool at_end = (j == n);
                
                if (at_start || at_end) {
               
                    additional += (length + 1) / 3;
                } else {
                
                    if (length >= 3) {
                        additional += length / 3;
                    }
                }
                
                i = j;
            } else {
                i++;
            }
        }
        
        cout << current + additional <<endl;
    }
    
    return 0;
}