#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
 int x[100],n,med,l[100],u[100],c,d,med1,med2,ci=0,ti=0,swap,k=0;
 scanf("%d",&n);
 int i;
 for(i=0;i<n;i++){
     scanf("%d",&x[i]);
 }
 for (c=0;c<(n-1);c++)
 {
     if (x[d]>x[d+1])
     {
         swap = x[d];
         x[d] = x[d+1];
         x[d+1] = swap;
     }
 }
 if(n%2==0){
     med=(x[((n-1)/2)]+x[((n-1)/2)+1])/2;
 }
 else{
     
 }
    return 0;
}

