class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long result = __builtin_popcountll(n);

        if(result ==1){
            return true;
        }
        else return false;
        
    }
};