#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,diff;
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    printf("%d %d",sum,diff);
    float c,e,S,D;
    scanf("%f %f",&c,&e);
    S=c+e;
    D=c-e;
    printf("\n%0.1f %0.1f",S,D);

    return 0;
}

