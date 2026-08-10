#include <bits/stdc++.h>
using namespace std;
int main(){
    int frequency[14]={0};
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
        frequency[arr[i]]++;
    }

    bool count2=false , count3=false;
    for(int i=0; i<14; i++){
        if(frequency[i]==2) count2=true;
        if(frequency[i]==3) count3=true;
    }

    if(count2 && count3) cout<<"Yes";
    else cout<<"No";
}