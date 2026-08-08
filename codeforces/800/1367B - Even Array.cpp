#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even_index =0;
        int odd_index=0;
        int even_ele=0;
        int odd_ele=0;
        int non_matching=0;
        int arr[n];
        for(int i =0; i<n; i++){
            cin>>arr[i];

            if(i%2==0) even_index++;
            else odd_index++;

            if(arr[i]%2==0) even_ele++;
            else odd_ele++;
        }

        if(even_ele!=even_index || odd_ele!=odd_index){
            cout<<-1<<endl;
        }
        else {
            for(int i=0; i<n; i++){
            if(i%2!=arr[i]%2){
                non_matching++;
            }
        }
        cout<<non_matching/2<<endl;
    }
        
    }
}