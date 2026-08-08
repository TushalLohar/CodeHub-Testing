class Solution {
public:
    static const int MOD = 1000000007;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        vector<int> up(m), down(m);

        for (int i = 0; i < m; i++) {
            up[i] = i;
            down[i] = m - 1 - i;
        }

        for (int len = 3; len <= n; len++) {

            vector<int> prefUp(m + 1, 0);
            vector<int> prefDown(m + 1, 0);

            for (int i = 0; i < m; i++) {
                prefUp[i + 1] =
                    (prefUp[i] + up[i]) % MOD;

                prefDown[i + 1] =
                    (prefDown[i] + down[i]) % MOD;
            }

            vector<int> newUp(m);
            vector<int> newDown(m);

            int totalUp = prefUp[m];

            for (int x = 0; x < m; x++) {

                newUp[x] = prefDown[x];

                newDown[x] =
                    (totalUp - prefUp[x + 1] + MOD) % MOD;
            }

            up.swap(newUp);
            down.swap(newDown);
        }

        long long ans = 0;

        for (int i = 0; i < m; i++) {
            ans += up[i];
            ans += down[i];
        }

        return ans % MOD;
    }
};