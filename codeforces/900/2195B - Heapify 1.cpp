#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        bool answer = true;

        for (int i = 1; i <= n; i++)
        {
            int number;
            cin >> number;

            int position = i;
            int value = number;

            while (position % 2 == 0)
            {
                position /= 2;
            }

            while (value % 2 == 0)
            {
                value /= 2;
            }

            if (position != value)
            {
                answer = false;
            }
        }

        if (answer)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}