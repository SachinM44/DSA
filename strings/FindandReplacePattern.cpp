class Solution {
public:
  void createMapping(string& str){
    //creaeting the the mapping here 
    char start='a';
    char mapping[393]={0};
    for(auto ch: str){
        if(mapping[ch]==0){
            mapping[ch]=start;
            start++;
        }
    }
//updating the strings here 
for(int i=0; i<str.length();i++){
    char ch=str[i];
    str[i]=mapping[ch];
}

  }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       vector<string> ans;
       createMapping(pattern);
       for(string s: words){
        string tempStirng=s;
        createMapping(tempStirng);
        if(tempStirng==pattern){
            ans.push_back(s);
        }
       }
    return ans;
    }
};