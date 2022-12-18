int findLongestConseqSubseq(int arr[], int n)
    {
      map<int,int>mp;int c=1,ans=0;
      for(int i=0;i<n;i++)
      mp[arr[i]]++;
      for(auto it=mp.begin();it!=mp.end();it++)
      {
        if(mp.find(it->first+1)!=mp.end())
        c++;
        else
        c=1;
        ans=max(ans,c);
      }
      return ans;
    }
