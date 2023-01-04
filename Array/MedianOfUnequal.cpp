class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        vector<int>array;
        int m = array1.size();
        int n = array2.size();
        int i=0;
        int j=0;
        
        while(i<m&&j<n)
        {
            if(array1[i]<array2[j])
            {
                array.push_back(array1[i]);
                i++;
            }
            else
            {
                array.push_back(array2[j]);
                j++;
            }
        }
        while(i<m)
        {
            array.push_back(array1[i]);
            i++;
        }
        while(j<n)
        {
            array.push_back(array2[j]);
            j++;
        }
        
        int p = array.size();
        if(p%2)
        return array[p/2];
        else
        return (array[p/2-1]+array[p/2])/2.0;
    
    }
};
