#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        long long l, r, k;
        cin >> l >> r >> k;
        
        if(l == r){
            cout << (l > 1 ? "YES" : "NO") << "\n";
            continue;
        }
        
        long long total = r - l + 1;
        long long odds;
        if(l % 2 == 1){
            odds = (total + 1) / 2;
        } else {
            odds = total / 2;
        }
        
        cout << (k >= odds ? "YES" : "NO") << "\n";
    }
    return 0;
}