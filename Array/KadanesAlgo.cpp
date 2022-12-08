class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int max = INT_MIN;
        int max_till_here = 0;
        for(int i=0; i<n; i++){
            max_till_here = max_till_here + arr[i];
            
            if(max_till_here>max){
                max = max_till_here;
            }
            if(max_till_here<0){
                max_till_here = 0;
            }
        }
        return max;
        // Your code here
        
    }
};
