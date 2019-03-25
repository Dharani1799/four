#include <stdio.h>
int main()
{
	int a[5],i,n,k,count[7],k=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	            t=a[j];
	            a[j]=a[i];
	            a[i]=t;
	        }
	    }
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]==a[j])
	        {
	            count[k]=a[i];
	        }
	    }
	}
	
}
