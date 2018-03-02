#include <stdio.h>

void main()
{
    char a[20],i,len;
    printf("enter the string");
   scanf("%s",&a);
   len=strlen(a);
   for(i=len-1;a[i]!='\0';i--)
   {
       printf("%c",a[i]);
   }
   
}
