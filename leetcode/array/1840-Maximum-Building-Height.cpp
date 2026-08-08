class Solution {
public:
    int maxBuilding(int m, vector<vector<int>>& restrictions) {
        restrictions.push_back({1,0});

        bool has_N=false;
        for(auto &r : restrictions){
            if(r[0]==m){
                has_N= true;
                break;
            }
        }
        if(!has_N) restrictions.push_back({m , m-1});
        sort(restrictions.begin(),restrictions.end());
        int n = restrictions.size();

        for(int i =1; i<n;i++){
            int distance = restrictions[i][0] - restrictions[i-1][0];

            restrictions[i][1]= min(restrictions[i][1], restrictions[i-1][1]+distance);
         }

         for(int i =n-2; i>=0;i--){
            int distance = restrictions[i+1][0] - restrictions[i][0];

            restrictions[i][1]= min(restrictions[i][1], restrictions[i+1][1]+distance);
         }
         long long ans=0;

         for(int i=1;i<n;i++){
            long long pos1= restrictions[i-1][0];
            long long h1= restrictions[i-1][1];

            long long pos2= restrictions[i][0];
            long long h2= restrictions[i][1];

            long long dist =pos2-pos1;

            long long peak = max(h1,h2)+ (dist - abs(h1-h2))/2;

            ans= max(ans ,peak );

            
         }

         return ans;


        
    }
};