class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    
    long long min = INT_MAX;
    
    for(int i=0; i+m-1<n; i++){
        int d = a[i+m-1]-a[i];
        if(d<min){
            min=d;
        }
    }
    return min;
    }   
};
