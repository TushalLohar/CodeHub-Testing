#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;


        int ans = n;
        int left =0 , right =n-1;
        while(left<=right){
            if(s[left]!=s[right]){
                ans-=2;
            }
            else{
                break;
            }

            left++;
            right--;
        }

        cout<<ans<<endl;
    }
}
