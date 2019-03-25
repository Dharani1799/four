#include <stdio.h>
int main() 
{
    int n,rem,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        s=s+(rem*rem);
        n=n/10;
    }
    printf("%d",s);
	return 0;
}
