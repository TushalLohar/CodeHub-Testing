#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
        int k;
        cin>>n>>k;
        
        if(k > n){
            cout<<"NO"<<endl;
            return 0;
            
        }
        vector<int> ans;
            for(int i=0; i<32; i++){
                if(n & 1<<i){
                    ans.push_back(1<<i);
                }
            }
            if(ans.size() > k){
                cout<<"NO"<<endl;
                return 0;
                
            }
            int size = ans.size();
            int i = 0;
            while(size < k){
                while(ans[i] == 1){
                    i++;
                }
                int temp = ans[i]/2;
                ans[i] /= 2;
                ans.push_back(temp);
                size++;
            }
 
            cout<<"YES"<<endl;
            sort(ans.begin(), ans.end());
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
}