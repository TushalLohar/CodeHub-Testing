#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
void solve(){
    string x, y;
        cin>>x>>y;
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
 
        int pos = 0;
        for(int i=0; i<y.size(); i++){
            if(y[i] == '1'){
                while(pos < x.size()){
                    if(pos>=i && x[pos] == '1'){
                        cout<<abs(i-pos)<<endl;
                        return;
                    }
                    pos++;
                }
            }
        }
        cout<<0<<endl;
        return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}