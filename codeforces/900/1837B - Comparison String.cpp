#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int longest_substring =1;
        int current_substring =1;
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                current_substring++;

            }
            else{
                longest_substring=max(longest_substring, current_substring);

                current_substring=1;
            }
        }
        longest_substring =max(longest_substring, current_substring);

        cout<<longest_substring+1<<endl;
    }
}