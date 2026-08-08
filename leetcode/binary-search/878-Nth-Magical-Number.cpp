class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long mod = 1e9+7;
        long long lcm = 1LL * a/gcd(a,b)*b;
        long long low =min(a,b);
        long long high = 1LL * n* min(a,b);
        long long ans=-1;
        while(low<=high){
            long long mid= low+(high-low)/2;

            long long count=
            (mid/a)+(mid/b)-(mid/lcm);

            if(count>=n){
                ans =mid;
                high =mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans%mod;
        
    }
};