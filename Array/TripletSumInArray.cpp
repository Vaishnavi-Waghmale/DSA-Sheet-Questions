class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int x)
    {
        //Your Code Here
        int l, r;
        sort(A, A+n);
        
        for(int i=0; i<n-2; i++){
            l= i+1;
            r= n-1;
            
            while(l<r){
                if(A[i]+A[l]+A[r] == x){
                    return true;
                }
                else if(A[i]+A[l]+A[r] < x){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return false;
    }

};
