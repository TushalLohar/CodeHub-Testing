#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> citizens(n);
    for(int i=0; i<n; i++){
        cin>>citizens[i];
    }

    int maxi = *max_element(citizens.begin(), citizens.end());
    int sum =0;

    for(int i=0; i<n; i++){
        sum += maxi - citizens[i];
    }

    cout<<sum;
}