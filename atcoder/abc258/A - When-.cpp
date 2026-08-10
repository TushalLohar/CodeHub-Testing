#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
     int hour =21;
    if (k>=60){
        hour=22;
        k =k-60;
    }
    cout<<hour<<":";
    if(k<10) cout<<0<<k;
    else cout<<k;
}