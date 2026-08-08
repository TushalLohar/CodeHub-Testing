class Solution {
public:
    char findTheDifference(string s, string t) {
        // int freq[26] = {0};

        // for(char c : s)
        //     freq[c-'a']++;

        // for(char c : t){
        //     freq[c-'a']--;
        //     if(freq[c-'a'] < 0)
        //         return c;
        // }

        // return ' ';

        char ans=0;

        for(char c:s){
            ans^=c;
        }

        for(char x:t){
            ans^=x;
        }

        return ans;
    }
};