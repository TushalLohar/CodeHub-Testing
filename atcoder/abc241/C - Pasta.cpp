#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,m;
    cin>>n>>m;
    vector<long long> noodles(n);
    for(int i=0; i<n; i++){
        cin>>noodles[i];
    }
    vector<long long> meals(m);
    for(int i=0; i<m; i++){
        cin>>meals[i];
    }
    long long count=0;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(meals[i]==noodles[j]){
                count++;
                noodles[j]=-1;
                break;
            }
        }

    }

    if(count==m){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}