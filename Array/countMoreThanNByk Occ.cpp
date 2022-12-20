class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int x = n/k;
        int count=0;
        unordered_map<int, int>freq;
        for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        }
        for (auto i : freq) {
            if (i.second > x){
                count++;
            }
        }
        return count;
    }
};
