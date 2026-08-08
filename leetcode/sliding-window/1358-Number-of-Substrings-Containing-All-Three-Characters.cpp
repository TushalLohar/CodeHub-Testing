class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int res=0;
        vector<int> lastInd={-1,-1,-1};
        for(int i=0;i<n;i++){
            lastInd[s[i]-'a']=i;
            if(lastInd[1]>=0 && lastInd[2]>=0 && lastInd[0]>=0){
                res+=min(lastInd[0],min(lastInd[1],lastInd[2]))+1;
            }
        }
       return res; 
    }
};