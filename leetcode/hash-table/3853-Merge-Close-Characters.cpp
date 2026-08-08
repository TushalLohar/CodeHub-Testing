class Solution {
public:
    string mergeCharacters(string s, int k){
        string temp = s;
        while (true){
            bool merged = false;
            for (int i = 0;i<temp.size();i++){
                for (int j= i+1;j<temp.size()&&j<=i+k;j++){
                    if (temp[i] == temp[j]) {
                        temp.erase(j, 1);
                        merged = true;
                        break;
                    }
                }
                if (merged) break;
            }
            if (!merged) break;
        }
        return temp;
    }
};