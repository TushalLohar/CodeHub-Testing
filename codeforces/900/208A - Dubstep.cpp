 #include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

 
    for (int i = 0; i + 2 < s.size(); ) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            s[i] = ' ';
            s[i+1] = ' ';
            s[i+2] = ' ';
            i += 3;
        } else {
            i++;
        }
    }

    string word;
    stringstream ss(s);
    while (ss >> word) {
        cout << word << " ";
    }

    return 0;
}


