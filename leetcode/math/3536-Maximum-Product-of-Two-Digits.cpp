class Solution {
public:
    int maxProduct(int n) {
        int d1 = -1, d2 = -1;

        while (n) {
            int d = n % 10;
            n /= 10;

            if (d >= d1) {
                d2 = d1;
                d1 = d;
            } else if (d > d2) {
                d2 = d;
            }
        }

        return d1 * d2;
    }
};