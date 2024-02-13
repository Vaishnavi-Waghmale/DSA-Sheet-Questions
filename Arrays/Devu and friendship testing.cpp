#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    unordered_set<int> a;
	    for(int j: arr){
	        a.insert(j);
	        
	    }
	    int ans = a.size();
	    cout<<ans<<endl;
	}
	return 0;
}
