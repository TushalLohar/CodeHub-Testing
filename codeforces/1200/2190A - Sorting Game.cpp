#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--){
        int n;
        string s;
        cin >> n >> s;
 
        string t = s;
        sort(t.begin(), t.end());
 
        if(s == t){
            cout << "Bob\n";
            continue;
        }
 
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(s[i] != t[i])
                ans.push_back(i+1);
        }
 
        cout << "Alice\n";
        cout << ans.size() << "\n";
 
        for(int x : ans)
            cout << x << " ";
 
        cout << "\n";
    }
}