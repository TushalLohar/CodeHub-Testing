class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size())
            return false;

        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string currWord = words[i];

            if (!charToWord.count(ch) && !wordToChar.count(currWord)) {
                charToWord[ch] = currWord;
                wordToChar[currWord] = ch;
            }
            else if (charToWord[ch] != currWord || wordToChar[currWord] != ch) {
                return false;
            }
        }

        return true;
    }
};