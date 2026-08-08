class TrieNode {
public:
    TrieNode* child[10];

    TrieNode() {
        for (int i = 0; i < 10; i++)
            child[i] = nullptr;
    }
};
class Solution {
public:
    void insert(TrieNode* root, const string& s) {
        TrieNode* node = root;

        for (char ch : s) {
            int digit = ch - '0';

            if (node->child[digit] == nullptr)
                node->child[digit] = new TrieNode();

            node = node->child[digit];
        }
    }
    int search(TrieNode* root, const string& s) {
        TrieNode* node = root;
        int length = 0;

        for (char ch : s) {
            int digit = ch - '0';

            if (node->child[digit] == nullptr)
                break;

            node = node->child[digit];
            length++;
        }

        return length;
    }

    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        TrieNode* root = new TrieNode();

        for (int num : arr1)
            insert(root, to_string(num));

        int ans = 0;

        for (int num : arr2)
            ans = max(ans, search(root, to_string(num)));

        return ans;
    }
};