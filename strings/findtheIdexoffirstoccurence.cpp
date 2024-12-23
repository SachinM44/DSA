class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        int n=needle.size();
        if(n == 0) return 0;
        for(int i =0; i<=h-n; i++){
            int j=0;
            //it will check s==s && a==a && d==d 
            while(j<n && haystack[i+j]==needle[j]){
                j++;
            }
            if(j==n) return i;
        }
        return -1;
    }
};