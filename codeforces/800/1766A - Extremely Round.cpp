#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // string s= to_string(n);
        // int len =s.size();
        // int first_digit =s[0]-'0';

        // int ans = 9*(len-1)+first_digit;

        // cout<<ans<<endl;

        int count=0;
        int power_10 =1;
        while(power_10<=n){
            for(int i=1; i<=9;i++){
                if(i*power_10<=n) count++;

            }
            power_10*=10;
        }
        cout<<count<<endl;

    }
    return 0;
}