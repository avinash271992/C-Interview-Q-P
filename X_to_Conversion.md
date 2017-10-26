# C-Interview-Q-P
1. octal to decimal conversion in c program
#include<stdio.h>
#include<math.h>
int main()
{
int decimal,octal;
printf("enter the octal value\n");
scnaf("%d",&octal);
int temp=octal;
while(temp)
{
decimal=decimal+temp%10*pow(8,i++);
temp=temp/10;
}
printf("Decimal = %d\n",decimal);
}

Decimal to octal
#include<stdio.h>
int main()
{
int d=30;
int a[20],i=0;
while(d!=0)
{
a[i++]=d%8;
d=d/8;
}
int j=i-1;
for(j;j>=0;j--)
printf("%d",a[j]);
}
