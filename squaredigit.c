#include<stdio.h>
#include<math.h>
int main()
{
int num,temp=0,rem;
printf("Enter the number ");
Scanf("%d",&num);
do
{
rem=num%10;
temp=temp+pow(rem,2);
num=num/10;
}while(q!=0);
printf("The sum of square of digit is %d", temp);
return 0;
}


