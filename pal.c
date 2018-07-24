#include <stdio.h>
#include <string.h>
int main()
{
char S[20];
int i,len;
int flag=0;
scanf("%s",S);
len=strlen(S);
for(i=0;i<len;i++)
{
if(S[i]!=S[len-i-1])
{
flag=1;
break;
}
}
if (flag) 
{
printf("No",S);
}    
else 
{
printf("Yes",S);
}
return 0;
}
