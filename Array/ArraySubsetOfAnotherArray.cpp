string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int, bool>isPresent;
    
    for(int i=0; i<n; i++){
        isPresent[a1[i]] = true;
    }
    for(int i=0; i<m; i++){
        if(!isPresent[a2[i]]){
            return "No";
        }
    }
    
    return "Yes";
    
}
