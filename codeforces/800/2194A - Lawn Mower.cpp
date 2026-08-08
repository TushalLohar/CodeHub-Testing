#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        long long x,y;
        cin>>x>>y;
        long long boards=x/y;
        long long left=x%y;
        long long answer=boards*(y - 1)+min(left,y - 1);
        cout<<answer<<"\n";
    }
    return 0;
}