class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size());
        
        for(int i=0; i<boxes.size(); i++){
            int sum=0;
            for(int j=boxes.size()-1; j>=0;j--){
                if(boxes[j]=='1'){
                    sum=sum+ abs(j-i);

                }
              
            }
              ans[i]=sum;
        }
        return ans;
        
    }
};