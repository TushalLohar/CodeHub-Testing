class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size();
        vector<int> diffrence(n + 1, 0);
        for (int i = 0; i < n; i++) {
            if (lights[i] > 0) {
                int x = lights[i];
                int l = max(0, i - x);
                int r = min(n - 1, i + x);

                diffrence[l]++;
                if (r + 1 < n) {
                    diffrence[r + 1]--;
                }
            }
        }

            vector<int> done(n, 0);
            int current = 0;
            for (int i = 0; i < n; i++) {
                current += diffrence[i];
                done[i] = (current > 0);
            }

            int ans = 0;
            int i = 0;

            while (i < n) {
                if (done[i]) {
                    i++;
                    continue;
                }
                int j = i;
                while (j < n && !done[j])
                    j++;

                int length = j - i;
                ans += (length + 2) / 3;

                i = j;
            }
        
        return ans;
    }
};