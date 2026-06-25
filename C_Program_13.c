#include<stdio.h>
#include<math.h>
int disp_single_digit_square()
{
int num,digit,count=0,root;
printf("Enter the Number : ");
scanf("%d",&num);
while(num>0)
{
digit=num%10;
root=sqrt(digit);
if(root*root==digit)
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
result=disp_single_digit_square();
printf("%d",result);
}C_Program_19.c
