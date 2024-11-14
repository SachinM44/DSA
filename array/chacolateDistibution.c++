class Salution{
    public: 
    int findMinDiff(vector<int> &arr , int m){
        int n =arr.size();
        sort(arr.begin(),arr.end());
        int min=INT_MAX;

    for(int i=o; i+m-1<n;i++){
        int d = arr[i+m-1] - arr[i];
        if(d < min){
            min= d;
        }
    }
    return min;
    };
};