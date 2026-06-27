#include<stdio.h>
int disp_count_sum14()
{
int num=1,count=0,last,tens,hundreds,thousands,tenthousands,sum;
while(num<100000)
{
last=num%10;
tens=(num/10)%10;
hundreds=(num/100)%10;
thousands=(num/1000)%10;
tenthousands=(num/10000)%10;
sum=last+tens+hundreds+thousands+tenthousands;
if(sum==14)
{
count=count+1;
}
num++;
}
return count;
}
int main()
{
int result;
result=disp_count_sum14();
printf("%d",result);
}
