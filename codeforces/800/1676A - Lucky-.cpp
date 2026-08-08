#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int first =0;
        int second = 0;

        for(int i=0; i<3; i++){
            first = first+ s[i];

        }

        for(int i=3; i<6; i++){
            second = second+ s[i];

        }

        if(first==second){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}