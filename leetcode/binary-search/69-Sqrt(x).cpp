class Solution {
public:
    int mySqrt(int x) {
        long long low =1;
        long long high =x;
        long ans =1;
        if(x==0) return 0;

        while(low<=high){
            long long mid =(low+high)/2;
            long long z=mid*mid;
            if(z<=x){
                ans =mid;
                low=mid+1;
            }
            else if(mid*mid>=x){
                high =mid-1;
            }
            
            
        }
        return ans;
        
    }
};