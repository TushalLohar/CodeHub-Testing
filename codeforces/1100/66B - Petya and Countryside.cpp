#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    vector<int> h(n);
 
    for(int i = 0; i < n; i++)
        cin >> h[i];
 
    int ans = 1;
 
    for(int i = 0; i < n; i++)
    {
        int count = 1;
 
        int j = i;
 
        while(j > 0 && h[j-1] <= h[j])
        {
            count++;
            j--;
        }
 
        j = i;
 
        while(j < n-1 && h[j+1] <= h[j])
        {
            count++;
            j++;
        }
 
        ans = max(ans, count);
    }
 
    cout << ans;
}