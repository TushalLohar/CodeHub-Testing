#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> pref(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch;
            cin >> ch;

            int val = (ch == '*') ? 1 : 0;
            pref[i][j]= val+pref[i][j-1]+pref[i-1][j]-pref[i-1][j-1];

        }
    }

    while(q--){
        int y1,x1,y2,x2;
        cin>>y1>>x1>>y2>>x2;
        int answer =pref[y2][x2]-pref[y1-1][x2] - pref[y2][x1-1] + pref[y1-1][x1-1];

        cout<<answer<<endl;
    }
}