#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int count;
    scanf("%d[^\n]", &count);
    int vals[count];
    int means[count];
    for (int i=0;i<count;i++)
    {
        scanf("%d ", &vals[i]);
    }    
    for (int i=0;i<count;i++)
    {   
        scanf("%d ", &means[i]);
    }
    int x = 0;
    int sum = 0;
    int sumMean = 0;
    while (x < count)
    {
        sum += means[x]*vals[x];
        sumMean += means[x];
        ++x;
    }
    printf("%.1lf", (double)sum/sumMean);
    return 0; 
}

