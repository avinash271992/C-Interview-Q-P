#include<stdio.h>

#include<string.h>
char* user_strcat(char*str1,char*str2)
{
int i,j=0,l;
l=strlen(str1);
for(i=l;i<strlen(str2)+strlen(str1);i++)
str1[i]=str2[j++];
//printf("%s",str1);
return str1;
}
int main()
{
char str1[20]="avi", str2[20]="lala";
printf("enter the value of str1 and str2 \n");
//scanf("%s %s\n", str1,str2);
printf("string got concatenated %s",user_strcat(str1,str2));
}
