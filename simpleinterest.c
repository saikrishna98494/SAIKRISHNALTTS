#include <stdio.h>
int main()
{
    int pr,duration,ri;
    scanf("%d%d%d",&pr,&duration,&ri);
    int si;
    si=(pr*duration*ri)/100;
    printf("%d",si);
    return 0;
}
