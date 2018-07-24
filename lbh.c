#include <stdio.h>
int main()
{
float L,B,H;
float SA,V,LSA;
scanf("%f %f %f",&L,&B,&H);
SA=2*(L*B+L*H+B*H);
V=L*B*H;
LSA=2*H*(L+B);
printf("\n%.2f\n",SA);
printf("\n%.2f\n",V);
printf("\n%.2f\n",LSA);
return 0;
}
