class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int dup = x;
        int rev = 0;
        while(x){
            int lastdigit = x%10;
            x = x/10;
            if (rev > INT32_MAX / 10 || (rev == INT32_MAX / 10 && lastdigit > 7)) {
           
            return false;
        }
        if (rev < INT32_MIN / 10 || (rev == INT32_MIN / 10 && lastdigit < -8)) {
          
            return false;
        }
        rev = rev*10 + lastdigit;
       
        }
         if(rev == dup){
            return true;
        }
        else {
            return false;
        }
       

        
        
    }
};