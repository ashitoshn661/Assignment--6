#include<stdio.h>
int main()
{
int n,i,a;
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 a = n%10;
 n = n/10;
}
printf("%d\n",a);
return 0;
}
