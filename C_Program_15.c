#include<stdio.h>
int disp_single_digit_prime()
{
int num,digit,count=0,index,isprime;
printf("Enter the Number : ");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
if(digit<2)
{
isprime=0;
}
else
{
index=2;
isprime=1;
while(index<digit)
{
if(digit%index==0)
{
isprime=0;
}
index++;
}
}
if(isprime==1)
{
count=count+1;
}
num=num/10;
}
return count;
}
int main()
{
int result;
result=disp_single_digit_prime();
printf("%d",result);
}
