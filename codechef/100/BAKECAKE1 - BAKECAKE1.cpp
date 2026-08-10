#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    cin>>N>>M;
    int making_price= 30;
    int selling_price=50;
    int cost = 30*N;
    int sale = 50*M;
    int profit = sale - cost;
    cout<<profit<<endl;
    return 0;
    
    
}