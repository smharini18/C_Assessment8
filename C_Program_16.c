#include<stdio.h>
int disp_biggest_4digit_div7_9()
{
int num,result;
num=1000;
while(num<10000)
{
if(num%7==0 && num%9==0)
{
result=num;
}
num++;
}
return result;
}
int main()
{
int output;
output=disp_biggest_4digit_div7_9();
printf("%d",output);
}
