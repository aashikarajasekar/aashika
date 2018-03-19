#include <stdio.h>
void main()
{
    char a[20];int i;
    printf("enter the cahracter");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]+3;
        printf("%c",a[i]);
        
    }
}
