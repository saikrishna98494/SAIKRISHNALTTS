#include <stdio.h>
int main()
{
   int num=4375;
   int a,b,c,d,res;
   a=num/1000;
   b=(num/100)%10;
   c=(num/10)%10;
   d=num%10;
   res=d*1000+c*100+b*10+a;
   printf("%d",res);
    return 0;
}
