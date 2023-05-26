#include <stdio.h>
int main()
{
   int a=20,b=30,temp;
   printf("before swaping variables   %d,%d  \n",a,b );
   a=a+b;//20+30=50
   b=a-b;//50-30=20
   a=a-b;
   printf("after swapping variables  %d,%d",a,b);
    return 0;
}
