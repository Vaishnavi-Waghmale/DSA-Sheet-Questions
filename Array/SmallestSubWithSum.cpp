class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int curr_sum = 0; 
        int min_len = n+1;
        int start=0; 
        int end=0;
        
        while(end<n){
            while(curr_sum <= x && end < n){
                curr_sum += arr[end++];
            }
            
            while(curr_sum > x && start < n){
                
                if(end - start < min_len){
                    min_len = end - start;
                }
                curr_sum -= arr[start++];
            }
        }
        return min_len;
        
    }
};
