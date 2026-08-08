#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt100 = 0, cnt200 = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x == 100) cnt100++;
        else cnt200++;
    }

    int total = cnt100 * 100 + cnt200 * 200;

    if(total % 2 != 0){
        cout << "NO";
        return 0;
    }

    if(cnt100 == 0 && cnt200 % 2 != 0){
        cout << "NO";
        return 0;
    }

    if(cnt100 % 2 == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}