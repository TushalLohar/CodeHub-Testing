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
        vector<int> nums(n+1,0);
        int current =1;
        nums[current]=1;

        for(int i=0;i<n;i++){
            if(s[current]=='R'){
                current=current+1;
            }
            else{
                current=current-1;
            }

            nums[current]=1;
        }

        int answer =0;
        for(int i=1;i<=n;i++){
            if(nums[i]){
                answer++;
            }
        }
        cout<<answer+1<<endl;
    }
}