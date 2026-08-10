#include <bits/stdc++.h>
#include <iostream>
#include <map>
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
        for (auto &x : nums) cin >> x;

        int answer = 0;
        int next = n + 1;

        while (true) {
            int index = -1;

            for (int i = 0; i < n; i++) {
                map<int, int> frequency;
                int balance = 0;

                int j = i;
                while (j >= 0) {
                    frequency[nums[j]]++;

                    if (frequency[nums[j]] == 1) balance++;
                    else if (frequency[nums[j]] == 2) balance--;

                    if (balance == 0) {
                        index = i;
                        break;
                    }
                    j--;
                }

                if (index != -1) break;
            }

            if (index == -1) break;

            nums[index] = next;
            next++;
            answer++;
        }

        cout << answer << '\n';
    }

    return 0;
}