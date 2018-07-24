#include<stdio.h>
int main(void)
{
int a,b=0,c=1,i;
scanf("%d",&a);
while(a!=1)
{
a=a/2;
b++;
}
for(i=0;i<b+1;i++)
{
c=c*2;
}
printf("%d",c);
return 0;
}
