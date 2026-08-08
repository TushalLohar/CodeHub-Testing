#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long x;
        cin >> x;

        int found = 0;

        for (int i = 0; i < n; i++){
            if (arr[i] == x){
               found = 1;
                break;
            }
        }

        if (!found){
            for (int i = 0; i < n - 1; i++){
                if (min(arr[i], arr[i + 1]) <= x && max(arr[i], arr[i + 1]) >= x){
                    found = 1;
                    break;
                }
            }
        }

        if (found){  cout << "YES" << endl;}
        else{cout << "NO" << endl;}
    }
    return 0;
}