class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();

        // Earliest possible land ride finish
        int minLandFinish = INT_MAX;

        for (int i = 0; i < n; i++) {
            int finish = landStartTime[i] + landDuration[i];
            minLandFinish = min(minLandFinish, finish);
        }

        // Earliest possible water ride finish
        int minWaterFinish = INT_MAX;

        for (int j = 0; j < m; j++) {
            int finish = waterStartTime[j] + waterDuration[j];
            minWaterFinish = min(minWaterFinish, finish);
        }

        int answer = INT_MAX;

        // Case 1 : Land - Water
        for (int j = 0; j < m; j++) {

            int waterStart = max(minLandFinish, waterStartTime[j]);

            int finalFinish = waterStart + waterDuration[j];

            answer = min(answer, finalFinish);
        }

        // Case 2 : Water - Land
        for (int i = 0; i < n; i++) {

            int landStart = max(minWaterFinish, landStartTime[i]);

            int finalFinish = landStart + landDuration[i];

            answer = min(answer, finalFinish);
        }

        return answer;
    }
};