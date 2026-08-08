#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    map<string, int> freq;
    string answer;
    int maxFreq = 0;
    for (int i = 0; i < n - 1; i++){
        string t = s.substr(i, 2);
        freq[t]++;
        if (freq[t] > maxFreq){
            maxFreq = freq[t];
            answer = t;
        }
    }
    cout << answer;
    return 0;
}