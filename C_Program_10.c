#include<stdio.h>
int disp_2digits_even_sum6()
{
int num=2,index,isprime,total=0;
while(num<10)
{
index=2;
  
isprime=1;
while(index<num)
{
if(num%index==0)
{
isprime=0;
}
index++;
}
if(isprime==1)
{
total=total+1;
}
num++;
}
return total;
}
int main()
{
int result;
result=disp_2digits_even_sum6();
printf("%d",result);
}
