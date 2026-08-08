class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0)
            return true;
        int m = flowerbed.size();
        for (int i = 0; i < m && n > 0; i++) {
             if (flowerbed[i] == 1) continue;
            int left = (i == 0) || (flowerbed[i - 1] == 0);
            int right = (i == m - 1) || (flowerbed[i + 1] == 0);

            if (left && right) {
                flowerbed[i] = 1;
                n--;
            }
        }
        return n<=0;
    }
};