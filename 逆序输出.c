/*三位数整数逆序*/
#include<stdio.h>
int main ()
{
int i;
scanf("%d",&i);
printf("%d",i%10*100+i/100+(i%100/10)*10);
return 0;
}
