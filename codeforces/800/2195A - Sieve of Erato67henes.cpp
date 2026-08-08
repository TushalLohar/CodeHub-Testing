#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        bool answer = false;

        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            if(num == 67){
                answer = true;
            }
        }

        if(answer) cout << "YES\n";
        else cout << "NO\n";
    }
}