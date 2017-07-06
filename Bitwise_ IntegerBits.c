1 // C Program to Check if All the Bits of a given Integer is One(1) 
#include<stdio.h>
#include<string.h>
int main()
{
int n=2,i;
printf("enter  the value of n;\n");
//scanf("%d",&n);
for(i=0;i<32;i++)
{
if((n>>i)| 1) 
{
printf("Bit %d is not 1 of this number %d\n",i,n);
break;
}
}
}

2 
