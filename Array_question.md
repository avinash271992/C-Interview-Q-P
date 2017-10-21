# 1.C Program to Insert an Element in a Specified Position in a given Array 
#include<stdio.h>
#define size 10
int main()
{
int a[size];
int n,pos;
printf("enter the element of Array \n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position where you want to insert new data\n");
scanf("%d",&pos);
int data;
printf("enter the data which you want to insert at position %d\n",pos);
scanf("%d",&data);
for(i=n;i>pos;i--)
{
a[i]=a[i-1];
}
a[pos]=data;
n=n+1;
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
