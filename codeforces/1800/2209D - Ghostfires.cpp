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
        long long r, g, b;
        cin >> r >> g >> b;
        string s = "";

        long long total = r + g + b;
        long long maximum = max({r, g, b});
        

        for (int i = 0; i <total; i++)
        {
            int n = s.size();

            char last = (n >= 1 ? s[n - 1] : '$');
            char second_last = (n >= 2 ? s[n - 2] : '$');
            char third_last = (n >= 3 ? s[n - 3] : '$');
            
            char best = '$';
            long long best_count = -1;

            if (r > 0 && last != 'R' && third_last != 'R')
            {
                best = 'R';
                best_count = r;
            }
            if (g > 0 && last != 'G' && third_last != 'G')
            {
                if (g > best_count || (g == best_count && second_last == 'G'))
                {
                    best = 'G';
                    best_count = g;
                }
            }
            if (b > 0 && last != 'B' && third_last != 'B')
            {
                if (b > best_count || (b == best_count && second_last == 'B'))
                {
                    best = 'B';
                    best_count = b;
                }
            }
            if (best == '$'){
                break;
            }
              
            s += best;

            if (best == 'G')
                g--;
            else if (best == 'R')
                r--;
            else
                b--;
        }
        cout << s <<endl;
    }
    return 0;
}
