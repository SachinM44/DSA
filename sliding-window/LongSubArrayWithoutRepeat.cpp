class Solution {
public:
    int lengthOfLongestSubstring(string s) {

       int n=s.length();
        unordered_set<char> ans;
        int count=0;
        for(int i=0,j=0; j<n; j++ ){
            while(ans.count(s[j])){
                ans.erase(s[i]);
                i++;
            };

            ans.insert(s[j]);
            count=max(count, j-i+1);

        }

       return count; 
    }
};
//tc : o(n)