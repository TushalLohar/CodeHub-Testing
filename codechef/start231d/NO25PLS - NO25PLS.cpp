#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ---------- FAST IO ----------
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

// ---------- TYPES ----------
#define endl '\n'
#define ll long long
#define ld long double

// ---------- SHORTCUTS ----------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second

// ---------- CONSTANTS ----------
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        int answer =1000;
        for(int i=0;i<100;i++){
            if(n-i>0){
                bool divide2 =((n-i)%2==0);
                bool divide5 =((n-i)%5==0);

                if((divide2|| divide5) && !(divide2&&divide5)){
                    answer=i;
                    break;
                }
            }

            bool divide2 =((n+i)%2==0);
            bool divide5=((n+i)%5==0);

            if((divide2 || divide5) && !(divide2 && divide5)){
                answer=i;
                break;
            }
        }

        cout<<answer<<endl;

        

    }

    return 0;
}