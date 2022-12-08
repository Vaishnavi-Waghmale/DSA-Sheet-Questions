class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int lo = 0;
        int hi = n-1;
        int mid = 0;
        while(mid<=hi){//Dutch National Flag Algorithm
            switch(a[mid]){
                
                case 0:
                swap(a[lo++], a[mid++]);
                break;
                
                case 1:
                mid++;
                break;
                
                case 2:
                swap(a[mid], a[hi--]);
                break;
                
            }
        }
        // code here 
    }
    
};
