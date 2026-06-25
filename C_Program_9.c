#include<stdio.h>
int check_last_digit_odd()
{
int num,rem,count=0,first,temp,power=1,k=1,balance,result;
printf("Enter the Number : ");
scanf("%d",&num);
rem=num%10;
temp=num;
while(temp!=0)
{
temp=temp/10;
if(temp!=0)
{
count=count+1;
}
}
k=1;
while(k<=count)
{
power=power*10;
k++;
}
balance=num%power;
first=num/power;
if(rem%2==1)
{
result=(first-1)*power+balance;
}
else
{
result=(first)*power+balance;
}
return result;
}
int main()
{
int output;
output=check_last_digit_odd();
printf("%d",output);
}
