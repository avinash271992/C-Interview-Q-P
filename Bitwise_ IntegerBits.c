1  C Program to Check if All the Bits of a given Integer is One(1) 
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

2 C Program to Count the Number of Trailing Zeroes in Integer 
#include<stdio.h>
#include<string.h>
int main()
{
int n=16,count=0;
  while(n !=0)
  {
    if(n & 1==1)
      break;
    else
    {
      count++;
      n=n>>1;
    }
  }
  printf("count %d\n",count);
}

3 C Program to find the Highest Bit Set for any given Integer 
#include<stdio.h>
#include<string.h>
int main()
{
  int n=16,count=0,i=0;
  for(i=0;i<32;i++)
  {
    if(n>>i|0 ==1) //if(n>>i & 1 ==1)
      count=i;
  }
  printf("last bit %d\n",count );
}
  

4. C Program takes Byte as Input and returns all the Bits between given Positions 

#include<stdio.h>
#include<string.h>
int main()
{
  int n =78,result =0,i,j;
  int a=3,b=6,c=0;
  printf("enter the bit postion between you need to take data \n");
  //scanf("%d,%d",&a,&b);
  for(i=a,j=0;i<=b;i++,j++)                                           
  {
    c= n>>i & 1;
     c=c<<j;
    result+=c;
  }
  printf("Byte between a and b is =%d\n",result);
}
