#include<stdio.h>
int disp_LCM2()
{
int num1,num2,big,small,remainder,product,lcm;
printf("Enter the Number 1 : ");
scanf("%d",&num1);
printf("Enter the Number 2 : ");
scanf("%d",&num2);
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
product=num1*num2;
lcm=product/big;
return lcm;
}
int main()
{
int result;
result=disp_LCM2();
printf("%d",result);
}
