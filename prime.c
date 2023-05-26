#include <stdio.h>
int main()
{
    int n,i,m=0,flag=0;
    printf("enter a number:");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("no prime");
            break;
        }
    }
    if (flag==0)
    printf("%d is prime number",n);
    
    
    return 0;
}