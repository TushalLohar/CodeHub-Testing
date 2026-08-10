#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin >> T)) return 0;
    while(T--){
        long long W, P, K;
        cin >> W >> P >> K;
        long long m = min(W, K);
        long long ans = K + m; 
        cout << ans << '\n';
    }
    return 0;
}