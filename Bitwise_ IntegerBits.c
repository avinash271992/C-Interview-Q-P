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

5 C Program to Swap the ith and jth Bits for a 32-Bit Integer 

#include<stdio.h>
#include<string.h>
int main()
{
  int n=18, i=3,j=0;
  int temp=n;
  temp |=temp>>j & 1;
  n|=n>>i & 1;
  n |=temp>>j &1 ;
  printf("%d\n",n);
}

6 C Program to Swap two Integers without using Temporary Variables and Bitwise Operations

#include<stdio.h>
#include<string.h>
int main()
{
  int a=5,b=4;
  a=a+b;
  b=a-b;
  a=a-b;
  printf("%d %d \n",a,b);
}
  
  

#7 Count Total Set Bits in All Numbers From 1 to N

#include<stdio.h>
int count;
void countsetbit(int n)
{
  int i;
  for(i=0;i<32;i++)
  {
    if(n & 1<<i)
      count++;
  }
}

int main()
{
  int n=6;
  while(n)
  {
    countsetbit(n);
    n=n-1;
  }
  printf("Number of set bit %d\n",count);
}

#8 Smallest of three integers without comparison operators
#include<stdio.h>
 
int smallest(int x, int y, int z)
{
  int c = 0;
  while ( x && y && z )
  {
      x--;  y--; z--; c++;
  }
  return c;
}
 
int main()
{
   int x = 12, y = 15, z = 5;
   printf("Minimum of 3 numbers is %d", smallest(x, y, z));
   return 0;
}

#9 Find whether a given number is a power of 4 or not
#include<stdio.h>
int poweroffour(int n)
{
  if((n&1)||(n&1<<1))
    return 0;
  return 1;
}

int main ()
{
  int n =40;
  if(poweroffour(n))
  printf("%d is power of four \n",n);
  else
    printf("%d not power of four \n");
  
}
  
