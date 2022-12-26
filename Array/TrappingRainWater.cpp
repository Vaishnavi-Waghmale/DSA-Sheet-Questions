long long trappingWater(int arr[], int n){
        // code here
        if(n<=2){
            return 0;
        }
        vector<int>left(n), right(n);
        
        left[0] = 0;
        int leftMax = arr[0];
        for(int i=1; i<n; i++){
            left[i] = leftMax;
            leftMax = max(leftMax, arr[i]);
        }
        
        right[n-1] = 0;
        int rightMax = arr[n-1];
        for(int i=n-2; i>=0; i--){
            right[i] = rightMax;
            rightMax = max(rightMax, arr[i]);
        }
        
        long long trappedWater = 0;
        for(int i=1; i<n-1; i++){
            if(arr[i]<left[i] and arr[i]<right[i]){
                trappedWater += min(left[i], right[i]) - arr[i];
            }
        }
        
        return trappedWater;
    }
