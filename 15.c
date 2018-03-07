#include<stdio.h>
void main()
{
char a[20];int i,j;
printf("enter the string");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
for(j=1;a[i]!='\0';j++)
{
if(a[i]==a[j])
{
printf("%c",a[i]);
}
}
}
