#include<stdio.h>
int main()
{
int n,i,count=0,a;
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=n%10;
count++;
n=n/10;
}
printf("%d\n",count+1);
return 0;
}
