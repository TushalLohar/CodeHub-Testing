class Solution {
public:
    int numberOfSteps(int n) {

        int count =0;

        if(n%2==1){
            n-=1;
            count++;
        }

        while(n!=0){
            n/=2;
            count++;
            if(n%2==1){
                n-=1;
                count++;
            }
        }

        return count;
        
    }
};