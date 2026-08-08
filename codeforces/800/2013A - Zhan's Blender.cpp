#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        long long n,x,y;
        cin >> n;
        cin >> x >> y;
 
        long long ans = min(x,y);
 
        if(n % ans == 0){
            cout << n / ans << "\n";
        }
        else{
            cout << n / ans + 1 << "\n";
        }
    }
}