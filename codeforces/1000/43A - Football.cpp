#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, int> map; 
    string team;
    for(int i = 0; i < n; i++){
        cin >> team;
        map[team]++;     
    }
    string winner;
    int maxi = 0;
    for(auto it : map){
        if(it.second > maxi){
            maxi = it.second;
            winner = it.first;
        }
    }
    cout << winner;
    return 0;
}