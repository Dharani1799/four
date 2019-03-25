#include <stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
  char s[10000],a[10000];
  int d=0,i,l;
  gets(s);
  l=strlen(s);
  for(i=l-1;i>=0;i--)
  {
       a[d]=s[i];
     d++;
       }
   for(i=0;a[i]!='\0';i++)
  {
          if(a[i+1]!='\0')
        printf("%c-",a[i]);
       else
    printf("%c",a[i]);  
  }
 
}
