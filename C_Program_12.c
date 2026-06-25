#include<stdio.h>
int disp_total_2digits_odd()
{
int num,last,count=0,tens,value;
printf("Enter the Number : ");
scanf("%d",&num);
while(num>10)
{
last=num%10;
tens=(num/10)%10;
value=tens*10+last;
if(value%2==1)
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
result=disp_total_2digits_odd();
printf("%d",result);
}
