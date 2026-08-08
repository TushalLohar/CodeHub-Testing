class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
         vector<int> population_array(101,0);
    for(int i=0;i<logs.size();i++){
          int birth = logs[i][0] - 1950;
        int death = logs[i][1] - 1950;
        population_array[birth]++;
        population_array[death]--;

    }
    int maxpopulation=0;
    int current =0;
    int ans=1950;
    for(int i=0;i<101;i++){
        current+=population_array[i];

        if(current>maxpopulation){
            maxpopulation=current;
            ans=1950+i;
        }

    }
    return ans;
        
    }
};