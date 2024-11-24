class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(i<j && !isalpha(s[i])){
                i++;
            }
            else if( i<j && !isalpha(s[j])){
            j--;
            }
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
      return s;  
        
    }
};