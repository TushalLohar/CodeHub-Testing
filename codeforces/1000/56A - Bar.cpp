#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    set<string> alcohol ={
        "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE",
        "GIN", "RUM", "SAKE", "TEQUILA",
        "VODKA", "WHISKEY", "WINE"
    };
    int cnt = 0;
    while(n--) {
        string s;
        cin >> s;
        if(isdigit(s[0])){
            int age = stoi(s);
            if(age < 18) cnt++;
        }
        else{
            if(alcohol.count(s)) cnt++;
        }
    }
    cout << cnt;
}