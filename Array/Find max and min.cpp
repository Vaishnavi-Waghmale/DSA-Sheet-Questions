class Solution
{
   public:
    int findSum(int A[], int N)
    {   int max =0;
        int min=0;
        
    	//code here.
    	if(A[0]>A[1]){
    	    max = A[0];
    	    min = A[1];
    	}
    	else{
    	    max= A[1];
    	    min = A[0];
    	}
    	for(int i=2; i<N; i++){
    	    if(A[i]>max){
    	        max = A[i];
    	    }
    	    else if(A[i]<min){
    	        min = A[i];
    	    }
    	}
    	
    	return max+min;
    }

};
