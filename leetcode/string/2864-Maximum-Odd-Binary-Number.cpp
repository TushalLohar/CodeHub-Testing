class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0, zeros = 0;
        
        for (char c : s) {
            if (c == '1') ones++;
            else zeros++;
        }
        
        string result = "";
        
        // put (ones - 1) ones at front
        result.append(ones - 1, '1');
        
        // put all zeros
        result.append(zeros, '0');
        
        // last character must be 1
        result.push_back('1');
        
        return result;
    }
};