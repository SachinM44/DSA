class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false ;
        }
        int hashTable[256]={0};
        for(int i=0; i<s.length();i++){
            hashTable[s[i]]++;
        };
        for(int i=0; i<t.length();i++){
            hashTable[t[i]]--;
        }
        for(int i=0; i<256; i++){
            if(hashTable[i] !=0 ){
                return false;
            }
        } 
        return true ;
    }
};