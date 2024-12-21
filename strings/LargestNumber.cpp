class Solution {
public:
    static bool comp(string a, string  b){
        string t1=a+b;
        string t2=b+a;
        return t1 > t2;
    
    };
    string largestNumber(vector<int>& nums) {
        vector<string>snums;
        for(auto n:nums){
            snums.push_back(to_string(n));
        }
        sort(snums.begin(),snums.end(), comp);
        string s="";
        for(auto ch:snums){
            s+=ch;
        }
        return s;
    }
};