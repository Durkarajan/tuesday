#include <stdio.h>
int main()
{
int a,n;
scanf("%d",&n);
for(a=0;a<=n;a++)
{
if(n==a*a)
{
printf("no");
return 0;
}
}
printf("yes");
return 0;
}
