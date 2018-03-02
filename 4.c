#include <stdio.h>
void main()
{
    char s[20],a,b='.';int i=0;
    printf("enter the string");
    scanf("%s",&s);
    a=strlen(s);
   s[a]='.';
   for(i=0;s[i]!='\0';i++)
    {
    printf("%c",s[i]);
}

}
