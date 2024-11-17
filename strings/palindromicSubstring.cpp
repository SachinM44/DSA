class Solution {
public:
int expand(string s, int i, int j){
    int count=0; 
    while(i>=0 && j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
    };
return count;
}
    int countSubstrings(string s) {
        int totalCount=0;
        for(int centre=0; centre <s.length(); centre++){
            int addans=expand(s, centre , centre);
            int evenans=expand(s, centre, centre+1);
            totalCount=totalCount+addans+evenans;
     
        }
        return totalCount; 
    }
};