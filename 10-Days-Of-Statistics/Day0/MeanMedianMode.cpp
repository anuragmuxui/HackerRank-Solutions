#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() { 
    double a[2510],sum=0,temp,mode,count,temp_count,temp_mode;
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
     for(i=0;i<n;i++){
         for(j=i+1;j<n;j++){
             if(a[i]>a[j]){
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }
     }
     printf("%g\n",sum\n);
     if(n%2==1){
         printf("%g\n",a[n/2]);
     }
     else{
         printf("%g\n",(a[n/2]+a[n/2-1])/2);
     }
     cout = 0;
     temp_count = 1;
     temp_mode = a[0];
     mode = a[0];
     for(i=1;i<n;i++){
         if(a[i]!=temp_mode){
             temp_count=1;
             temp_mode=a[i];
         }
         else{
             temp_count++;
             if(count<temp_count){
                 count=temp_count;
                 mode=temp_mode;
             }
         }
     }
     printf("%g\n",mode); 
    return 0;
}

