class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int max_cost = *max_element(costs.begin(), costs.end());
        vector<int> freq(max_cost+1 ,0);
        for(int ele :costs){
            freq[ele]++;
        }
        int ans=0;
        int cost =0;
        for(int i=1; i<=max_cost;i++){
            while(freq[i]>0 && cost+i<=coins){
                ans++;
                cost+=i;
                freq[i]--;
            }

        }
        return ans;

        
    }
};