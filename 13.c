#include<stdio.h>
void main()
{
int a,n,sum=0;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
n=a%10;
sum=sum+(n*n);
a=a/10;
}
printf("the sum of square of its digit %d",sum);
}
}
