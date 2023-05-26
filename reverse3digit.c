#include <stdio.h>
int main()
{
   int num=375;
   int a,b,c,res;
   a=num/100;
   b=(num/10)%10;
   c=num%10;
   res=c*100+b*10+a;
   printf("%d",res);
    return 0;
}
