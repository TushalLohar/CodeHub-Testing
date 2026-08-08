class Solution {
public:
    bool check(int mid , vector<int>& bloomDay, int m, int k ){
        long long flowers=0;
        long long bouquets=0;
        for(int x:bloomDay){
            if(x<=mid){
                flowers++;
                if(flowers ==k){
                    bouquets++;
                    flowers=0;

                    if(bouquets==m){
                        return true;
                    }
                }
            }
            else{
                flowers=0;
            }
            
        }
        return false;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long needed = 1LL * m * k;

        if (needed > bloomDay.size())
            return -1;
        long long low =*min_element(bloomDay.begin(),bloomDay.end());
        long long high =*max_element(bloomDay.begin(),bloomDay.end());
        long long ans=-1;

        while(low<=high){
            long long mid=low+(high-low)/2;

            if(check(mid ,bloomDay ,m , k)){
                ans =mid;
                high =mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return ans;

        
    }
};