#include<stdio.h>
void main()
{
int num,count=0;
printf("Enter the number");
scanf("%d",&num);
while(num!=0)
{
num=num/10;
++count;
}
printf("The digits of number is %d ",count );
}
