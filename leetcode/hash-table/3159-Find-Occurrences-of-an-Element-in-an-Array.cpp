class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries,int x) {

        // vector<int> indices;

        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] == x) {
        //         indices.push_back(i);
        //     }
        // }

        // vector<int> ans;

        // for (int q : queries) {

        //     if (q <= indices.size()) {
        //         ans.push_back(indices[q - 1]);
        //     } else {
        //         ans.push_back(-1);
        //     }
        // }

        // return ans; 

        vector<int>ans;
        vector<pair<int , int>> p;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                p.push_back({nums[i],i});
            }
        }

        for(int i=0;i<queries.size();i++){
            if(queries[i]>p.size()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(p[queries[i]-1].second);
                
            }

        }
        return ans;

        

    }
};