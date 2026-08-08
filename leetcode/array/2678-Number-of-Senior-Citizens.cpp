class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count =0;
      
        int n = details.size();
        for(int i =0; i<n; i++){
              string s = details[i];
            string age = s.substr(11 , 2);
            int num = stoi(age);
            if(num>60){
                count++;
            }

        }
        return count;
        
    }
};