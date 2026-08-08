#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count =0;
        bool same =false;

        for(int i=0;i<n;i++){
            if(s[i]==s[(i+1)%n]){
                same=true;
            }
            else{
                count++;
            }
        }

        if(same){
            cout<<count+1<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }

}
