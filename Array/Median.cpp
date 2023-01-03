class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(), v.end());
		    int n = v.size();
		    int a = n/2;
		    if(n%2==0){
		        return ((v[a]+v[a-1])/2) ;
		    }
		    else{
		        return v[a];
		    }
		}
};
