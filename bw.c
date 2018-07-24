#include<stdio.h>
int getnumber();    
int main() 
{
int n=0;
n=getnumber();
while(!((n<=9)&&(n>=1)))
{
printf("no");
n=getnumber();
}
printf("%d",n);
return 0;
}      
int getnumber() 
{    
int num;
scanf("%d",&num);
return(num);
}
