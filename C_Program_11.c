#include<stdio.h>
int disp_total_odd_digits()
{
int num,digit,count=0;
printf("Enter the Number : ");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
if(digit%2==1)
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
result=disp_total_odd_digits();
printf("%d",result);
}
