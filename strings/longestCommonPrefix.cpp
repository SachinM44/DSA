class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // Handle empty input

        string ans;
        int i = 0;

        while (true) {
            char curr_ch = 0;

            for (auto& str : strs) {
                if (i >= str.length()) {
                    return ans; // Break if index exceeds length of any string
                }

                if (curr_ch == 0) {
                    curr_ch = str[i];
                } else if (str[i] != curr_ch) {
                    return ans; // Return current prefix if a mismatch is found
                }
            }
            
            ans.push_back(curr_ch);
            i++;
        }

        return ans; // Return the longest common prefix found
    }
};
