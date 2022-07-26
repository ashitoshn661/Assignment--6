#include<stdio.h>
int main()
{
int a,b,i,c;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
for(i=2;i<=a;i++)
{

if(a%i==0)
{
if(b%i==0)
{
   if(a>b){
printf("LCM of given number is %d",a);
   }
   else{
    printf("LCM of given number is %d",b);
   }

}
else{
    printf("The LCM of the given numbers. is %d",a*b);
}
}
}

return 0;
}
