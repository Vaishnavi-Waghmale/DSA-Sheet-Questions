class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	     long res = arr[0];
        long curres = 1;
        for(int i = 0 ; i < n ; i ++){
           curres*=arr[i];
           res=max(res,curres);
           if(curres==0){
               curres=1;
            }
            }
            curres = 1;
           for(int i = n-1 ; i >=0  ; i --){
           curres*=arr[i];
           res=max(res,curres);
           if(curres==0){
               curres=1;
            }
            }
           
        
        return res;
	}
};
