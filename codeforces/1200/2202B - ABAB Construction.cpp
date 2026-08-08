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

        string X;
        cin >> X;

       
        bool can_be_even = true;
        bool can_be_odd = false;

        for (int i = 0; i < n; i++)
        {
            int remaining = n - 1 - i;  

            bool next_can_even = false;
            bool next_can_odd = false;

            if (can_be_even)
            {
                char left_character = 'a';  
                char right_character;

               
                if (remaining % 2 == 0)
                    right_character = 'a';
                else
                    right_character = 'b';

                if (X[i] == '?' || X[i] == left_character)
                    next_can_odd = true;

               
                if (X[i] == '?' || X[i] == right_character)
                    next_can_even = true;
            }

          
            if (can_be_odd)
            {
                char left_character = 'b';  
                char right_character;

                if ((1 + remaining) % 2 == 0)
                    right_character = 'a';
                else
                    right_character = 'b';

                
                if (X[i] == '?' || X[i] == left_character)
                    next_can_even = true;

                if (X[i] == '?' || X[i] == right_character)
                    next_can_odd = true;
            }

            can_be_even = next_can_even;
            can_be_odd = next_can_odd;
        }

        if (can_be_even || can_be_odd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}