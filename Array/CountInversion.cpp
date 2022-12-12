long long int cot=0;
void merge(long long int a[],long long int ls,long long int n1,long long int rs,long long int n2)
    {
        long long int l[n1],r[n2],i,x=0,y=0,q=9;
        for ( i = 0; i < n1+n2; i++)
        {
            if(i<n1)
            {
                l[i]=a[ls+i];
            }
            if (n1<=i)
            {
                r[i-n1]=a[ls+i];
            }
            
        }
        //after copying
        for ( i = ls; i < ls+n1+n2; i++)
        {
            if(x<n1&&y<n2)
            {
            if (l[x]<r[y])
            {
                a[i]=l[x];
                x++;
            }
            else
            {
                a[i]=r[y];
                y++;
                cot=cot+n1-x;
            }
            }
            else
            {
                if(x==n1)
                {
                   q=0;break; 
                }
                if(y==n2)
                {
                    q=1;break;
                }
            }
            
        }
        if(q==0)
        {
            for(i=i;i<ls+n1+n2;i++)
            {
                a[i]=r[y];
                y++;
            }
        }
        if(q==1)
        {
            for(i=i;i<ls+n1+n2;i++)
            {
                a[i]=l[x];
                x++;
            }
        }
        
    }
    void sort(long long int a[],long long int st,long long int n)
{
    if (n<=1)
    {
        return ;
    }
   else{ 
  sort(a,st,n/2);
  sort(a,st+n/2,n-n/2);
  merge(a,st,n/2,st+n/2,n-n/2);
   }
}
