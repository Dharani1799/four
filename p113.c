#include <stdio.h>
#include<conio.h>
void main()
{
	char a[20];
	scanf("%s",a);
	int f;
	if(a[0]<'3' && a[1]<'10' && a[2]=='/' && a[3]<'1' && a[4]<'10' && a[5]=='/' && a[6]<'10' && a[7]<'10' && a[8]<'10' && a[9]<'10')
	{
		f=1;
	}
	else
	{
		f=0;
		
	}
	if((a[0]=='3' && a[1]<'2')&&(a[3]=='1' && a[4]<'3'))
	{
	    f=1;
	}
	if(f==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
}
