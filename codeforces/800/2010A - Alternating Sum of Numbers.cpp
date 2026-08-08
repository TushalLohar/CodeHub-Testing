#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        int sum = 0;
 
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
 
            if(i % 2 == 0){
                sum += x;
            }
            else{
                sum -= x;
            }
        }
 
        cout << sum << "\n";
    }
}