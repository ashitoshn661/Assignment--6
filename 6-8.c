#include<stdio.h>
int main()
{
int a,i;
printf("Enter a number: ");
scanf("%d",a);
for(i=2;i<a;i++)
{
if(a%i!=0)
{
printf("The number %d is a prime number.",a);
}
else
{
printf("The number %d is not a prime number.",a);
}
}
return 0;
}
