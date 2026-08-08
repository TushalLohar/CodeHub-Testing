// class Solution {
// public:
//     vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
//         vector<int> ans;
//         for(int i=0; i<order.size(); i++){
//             for(int j=0; j<friends.size(); j++){
//                 if(order[i]==friends[j]){
//                     ans.push_back(order[i]);
//                     break;

//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        unordered_set<int> freindset(friends.begin(),friends.end());
        for(int x :order){
            if(freindset.count(x)){
                ans.push_back(x);
            }
        }
        return ans;

    }
};
