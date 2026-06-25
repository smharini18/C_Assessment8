#include<stdio.h>
#include<math.h>
int disp_two_digit_square()
{
int num,last,count=0,root,tens,value;
printf("Enter the Number : ");
scanf("%d",&num);
while(num>10)
{
last=num%10;
tens=(num/10)%10;
value=tens*10+last;
root=sqrt(value);
if(root*root==value)
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
result=disp_two_digit_square();
printf("%d",result);
}
