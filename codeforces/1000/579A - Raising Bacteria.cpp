#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int no_of_set_bits_in_x=0;
    for(int i=0;i<32;i++){
        if(((1<<i)&x)>0){
            no_of_set_bits_in_x++;
        }
    }
    cout<<no_of_set_bits_in_x<<endl;
}