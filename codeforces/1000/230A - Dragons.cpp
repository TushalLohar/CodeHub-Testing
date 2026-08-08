#include <bits/stdc++.h>
using namespace std;
int main(){
    int s , n;
    cin>>s>>n;

    vector<pair<int,int>> dragrons(n);
    for(int i=0; i<n;i++){
        cin>>dragrons[i].first>>dragrons[i].second;
    }

    sort(dragrons.begin(),dragrons.end());

    for(int i=0;i<n;i++){
        if(s<=dragrons[i].first){
            cout<<"NO";
            return 0;
        }
        s+=dragrons[i].second;
    }
    cout<<"YES"<<endl;
}