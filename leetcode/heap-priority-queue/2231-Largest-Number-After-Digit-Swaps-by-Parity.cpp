class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        vector<char> even, odd;

        for (char ch : s) {
            if ((ch - '0') % 2 == 0)
                even.push_back(ch);
            else
                odd.push_back(ch);
        }

        sort(even.begin(), even.end(), greater<char>());
        sort(odd.begin(), odd.end(), greater<char>());

        int evenIndex = 0, oddIndex = 0;

        for (char &ch : s) {
            if ((ch - '0') % 2 == 0)
                ch = even[evenIndex++];
            else
                ch = odd[oddIndex++];
        }

        return stoi(s);
    }
};