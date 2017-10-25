# Convert little endian to big endian 
#include<stdio.h>
int main()
{
    int num=18,i=0,temp;
    //printf("enter the number\n");
    //scanf("%d",&num);

    printf("before converting little to big binary is :\n");
    for(i=31;i>=0;i--)
    {
        printf("%d",num>>i&1);
        if(i%8==0)
            printf(" | ");
    }
    printf("\n");
    char *p=(char*)&num,*q=p+3;
    for(i=0;i<2;i++)
    {
        temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }
    printf("after converting little to big binary is :\n");
    for(i=31;i>=0;i--)
    {
        printf("%d",num>>i&1);
        if(i%8==0)
            printf(" | ");
    }
    printf("\n");
}
