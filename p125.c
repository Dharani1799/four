#include <stdio.h>
int main()
{
    int n,a[20],i,j,c=0,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=100000;i>=2;i--)
	{
	    c=0;
	    for(j=0;j<n;j++)
	    {
	        if(i%a[j]==0)
	        {
	            c++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    if(c==n)
	    {
	        printf("%d is the common ",i);
	        flag=1;
	        break;
	    }
	}
	if(flag==0)
	{
	    printf("no");
	}
}
