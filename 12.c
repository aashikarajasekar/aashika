#include<stdio.h>
void main()
{
int a[30],i,j;
printf("enter the size of array");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("how many numbr to be shift");
scanf("%d",&j);
for(i=(j-1);i<=n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<=(j-1);i++)
{
printf("%d",a[i]);
}
}
