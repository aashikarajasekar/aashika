#include <stdio.h>
void main()
{
    char a[20];int i,flag,str;
    printf("enter the string");
    scanf("%s",&a);
    str=strlen(a);
    printf("%d\n",str);
    for(i=0;a[i]!='\0';i++)
    {
    if((a[i]>='0')&&(a[i]<='9'))
    {
        flag++;
    }
    }
    if(flag==(str))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
