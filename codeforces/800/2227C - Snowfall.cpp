#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ---------- FAST IO ----------
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

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

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        vector<int> div_6, div_2, div_3, none, answer;

        for (int x : nums)
        {
            bool div_by_2 = (x % 2 == 0);
            bool div_by_3 = (x % 3 == 0);

            if (div_by_2 && div_by_3)
            {
                div_6.pb(x);
            }
            else if (div_by_2)
            {
                div_2.pb(x);
            }
            else if (div_by_3)
            {
                div_3.pb(x);
            }
            else
            {
                none.pb(x);
            }
        }

        for (int x : div_6)
        {
            answer.pb(x);
        }
        for (int x : div_2)
            answer.pb(x);
        for (int x : none)
            answer.pb(x);
        for (int x : div_3)
            answer.pb(x);


            for(int i=0;i<n;i++){
                cout<<answer[i];

                if(i<n-1) cout<<" ";
            }
            cout<<endl;
    }

    return 0;
}