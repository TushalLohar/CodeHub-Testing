
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> rat, wc, man;
    string captain;
    for(int i=0;i<n;i++){
        string name,status;
        cin>>name>>status;
        if(status=="rat") rat.push_back(name);
        else if(status=="woman" || status=="child") wc.push_back(name);
        else if(status=="man") man.push_back(name);
        else captain=name;
    }
    for(string x:rat) cout<<x<<endl;
    for(string x:wc) cout<<x<<endl;
    for(string x:man) cout<<x<<endl;
    cout<<captain<<endl;
}