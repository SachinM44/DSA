class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>mp;
        //key:string value:string;
        for(auto str: strs){
            string s = str;
            ///sor the array 
            sort(s.begin(),s.end());
            mp[s].push_back(str);
            //this line will stores the sorted string into key of hash and strs(orginal string) to its value of hash
        }
            vector<vector<string>> ans ;
            //now iterate over the hash ma and push it to ans string and return it 
            for(auto it=mp.begin();  it != mp.end(); it++){
                ans.push_back(it->second);
            } 
        return ans;
    }
};