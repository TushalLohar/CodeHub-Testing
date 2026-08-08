class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();
        int ans =INT_MAX;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //land to water
                int land_finish =landStartTime[i]+landDuration[i];
                int water_start = max(land_finish,waterStartTime[j]);
                int total_1= water_start+waterDuration[j];

                //water to land;
                int water_finish= waterStartTime[j]+waterDuration[j];
                int land_start = max(water_finish,landStartTime[i]);
                int total_2=land_start+landDuration[i];

                ans = min(ans,min(total_1,total_2));
            }
        }
        return ans;
    }
};