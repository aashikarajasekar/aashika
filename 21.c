#include <stdio.h>
void main()
{
    int a[20],b[20],c[20],i,j,k,flag=0;
    printf("enter the number of elements");
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(j=0;j<2;j++)
    {
        scanf("%d",&b[j]);
        
    }
    for(k=0;k<2;k++)
    {
        scanf("%d",&c[k]);
        
    }
    i=0;j=0;k=0;
    while((a[i]&&b[j]&&c[k])!='\0')
    {
   if((a[i]==b[j])&&(b[j]==c[k])&&(c[k]==a[i]))
   {
       flag++;
       
   }
   i++;j++;k++;
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
        
    }
    }
