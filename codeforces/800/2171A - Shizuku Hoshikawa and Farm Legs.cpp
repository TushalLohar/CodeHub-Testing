#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int answer;
        if (n % 2 != 0)
        {
            answer = 0;
        }
        else
        {
            answer = (n / 4) + 1;
        }

        cout << answer << endl;
    }
    
}