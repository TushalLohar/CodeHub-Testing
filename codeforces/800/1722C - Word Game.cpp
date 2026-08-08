#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string, int> freq;
        vector<string> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            freq[a[i]]++;


        }
         vector<string> b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
            freq[b[i]]++;
        }
         vector<string> c(n);
        for(int i=0; i<n; i++){
            cin>>c[i];
            freq[c[i]]++;
        }
        int count1=0; int count2=0; int count3=0;

        for(int i=0; i<n; i++){
            if(freq[a[i]]==1) count1+=3;
            else if(freq[a[i]]==2) count1++;

            if(freq[b[i]]==1) count2+=3;
            else if(freq[b[i]]==2) count2++;


            if(freq[c[i]]==1) count3+=3;
            else if(freq[c[i]]==2) count3++;


        }

        cout<<count1<<" "<<count2<<" "<<count3<<endl;
    }
}