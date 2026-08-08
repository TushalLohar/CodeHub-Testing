#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int wCount = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'W'){
                wCount++;
            }
        }

      
        if(wCount == n){
            cout << "YES\n";
            continue;
        }

        bool ans = true;
        int i = 0;

        while(i < n){
            if(s[i] == 'W'){
                i++;
                continue;
            }

            int r = 0, b = 0;
            int start = i;

            while(i < n && s[i] != 'W'){
                if(s[i] == 'R') r++;
                if(s[i] == 'B') b++;
                i++;
            }

            int length = i - start;

            if(length == 1 || r == 0 || b == 0){
                ans = false;
                break;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
