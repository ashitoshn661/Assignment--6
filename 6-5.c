#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum = sum + i*i*i;
}
printf("%d\n",sum);
return 0;
}
