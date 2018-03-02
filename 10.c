#include<stdio.h>
void main()
{
    char a[20],b[20];
    int i,j,count=0;
    printf("enter the string");
    scanf("%s",&a);
     printf("enter the string");
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;b[i]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    }
    if(count==1)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
        
    }
}
