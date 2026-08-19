#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t, n, x, y, a, b, c;
    cin >> t;
    while(t--){
        cin >> n >> x >> y;
        c=n/lcm(x,y);
        a=n-n/x+c; 
        b=n/y-c;
        cout<<(n*(n+1)-a*(a+1)-b*(b+1))/2<<"\n";
    }
}