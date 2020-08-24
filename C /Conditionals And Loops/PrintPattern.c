#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{

int n,i,j,n1,k,m;
scanf("%d", &n);
n1=n*2-1;
int **a = (int **)malloc(n1 * sizeof(int *));
for (i=0; i<n1; i++)
a[i] = (int *)malloc(n1 * sizeof(int));
k=0;
m=n1-1;
while(n!=0)
{
for (i=k;i<=m;i++)
{
for(j=k;j<=m;j++)
{
if(i==k ||i==m||j==k|| j==m)
a[i][j]=n;
}
}
++k;
--m;
--n;
}
for (i=0;i<n1;i++)
{
for(j=0;j<n1;j++)
{
printf("%d " ,a[i][j]);
}
printf("\n");
}

return 0;
}

