class Solution {
public:
   int minConvert(string&time){ // im passing the time as an parameter to the function that i got form for loop  
    int hr = stoi(time.substr(0,2)); // extract using substr and convert into min using stoi
      int mn = stoi(time.substr(3,2)); 
    return hr*60 + mn;
   } 
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mins;
        for(auto time:timePoints){
                mins.push_back(minConvert(time));
        }
        sort(mins.begin(),mins.end());
        int ans=INT_MAX;
        int n= mins.size();//ensure it should find with in the chars 
        for(int i =1; i <n; i++ ){
            // Calculate the circular difference between the first and last times
            ans = min(ans, mins[i]-mins[i-1]);
        }
         
        ans =min(ans,1440- mins[n-1]+mins[0]);
        return ans;
    }
};