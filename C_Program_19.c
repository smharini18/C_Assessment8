#include<stdio.h>
int disp_LCM3()
{
int num1,num2,num3,big,small,remainder,product1,product2,lcm,tempbig,tempsmall;
printf("Enter the Number 1 : ");
scanf("%d",&num1);
printf("Enter the Number 2 : ");
scanf("%d",&num2);
printf("Enter the Number 3 : ");
scanf("%d",&num3);
if(num1>num2)
{
big=num1;
small=num2;
}
else
{
big=num2;
small=num1;
}
while(small!=0)
{
remainder=big%small;
big=small;
small=remainder;
}
product1=num1*num2;
lcm=product1/big;
if(lcm>num3)
{
tempbig=lcm;
tempsmall=num3;
}
else
{
tempbig=num3;
tempsmall=lcm;
}
while(tempsmall!=0)
{
remainder=tempbig%tempsmall;
tempbig=tempsmall;
tempsmall=remainder;
}
product2=lcm*num3;
lcm=product2/tempbig;
return lcm;
}
int main()
{
int result;
result=disp_LCM3();
printf("%d",result);
}
