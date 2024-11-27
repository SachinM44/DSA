class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false; 
         int hash[266]={0};
        int isTcharMapped[256]={0};
        for(int i=0; i<s.size(); i++){
            if(hash[s[i]]==0 && isTcharMapped[t[i]]==0 ){
                hash[s[i]]=t[i];
                isTcharMapped[t[i]]=true;
            }else if(hash[s[i]] != t[i]){
                return false;
            }
        }
    
        
    
    return true;
    }
};