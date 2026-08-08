class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,piles[i]);
        }
        int left=1,right=mx,mid;
        while(left<=right){
            mid=left+(right-left)/2;
            long long count=0;
            for(int i=0;i<n;i++){
                count+=(piles[i]+mid-1)/mid;
            }
            if(count>h){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return left;
    }
};