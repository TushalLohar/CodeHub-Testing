#include <iostream>
using namespace std;
 
int main(){
    long long a,c,b=0;
    cin>>a>>c;
 
    long long pow3=1;
 
    while(a>0 || c>0){
        int a_digit=a%3;
        int c_digit=c%3;
 
        int b_digit=(c_digit-a_digit+3)%3;
 
        b+=b_digit*pow3;
 
        a/=3;
        c/=3;
        pow3*=3;
    }
 
    cout<<b<<endl;
}