#include <stdio.h>
void main()
{
    int n,a;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {   a=n%10;
        n=n/10;
        printf("%d",a);
    }
}

