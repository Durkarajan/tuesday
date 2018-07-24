#include <stdio.h>
int main()
{
int arr[100],l,i,j,temp,n;
scanf("%d", &l);
for (i=0;i<l;i++) 
{
scanf("%d",&arr[i]);
}
scanf("%d", &n);
printf("\n%d",n,arr[n-1]);
return 0;
}
