#include<iostream>
using namespace std;
 
int t, n;
int p[55];
 
int main()
{
    cin >> t;
 
    while (t--)
    {
        cin >> n;
 
        for (int i = 1; i <= n; i++)
            cin >> p[i];
 
        bool flag = false;
 
        for (int i = 1; i <= n; i++)
        {
            if (p[p[i]] == i)
                flag = true;
        }
 
        cout << (flag ? 2 : 3) << endl;
    }
 
    return 0;
}