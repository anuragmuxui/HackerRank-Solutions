#include <assert.h>                            
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 int factorial(int n)
 {
     if(n <= 1)
        return 1;
     return n * factorial(n - 1);   
 }

 int main()
 {
     int n;
     scanf("%d", &n);

     if(n < 2 || n > 12)
            return 1;
     printf("%d\n", factorial(n));

     return 0;       
 }


