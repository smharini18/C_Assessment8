#include<stdio.h>
int disp_count_HCF2()
{
int num1,num2,big,small,remainder;
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
return big;
}
int main()
{
int result;
result=disp_count_HCF2();
printf("%d",result);
}
