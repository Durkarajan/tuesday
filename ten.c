#include <stdio.h>
int main(void)
{
int a;
scanf("%d",&a);
do
{
a++;
}
while(a%10!=0);
printf("%d",a);
return 0;
}
