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

        vector<int> answer;
        int no_of_zeros=0;
        int no_of_ones =0;
        for(char c:s){
            if(c=='1'){
                no_of_ones++;
            }
            else{
                no_of_zeros++;
            }
        }


        if(no_of_ones%2==0){
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    answer.push_back(i+1);
                }
            }
        }
        else if(no_of_zeros%2==1){
            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    answer.push_back(i+1);
                }
            }
        }
        else{
            cout<<-1<<endl;
            continue;
        }

        cout<<answer.size()<<endl;
        for(int ans:answer){
            cout<<ans<<" ";
        }
        cout<<endl;



    }
}