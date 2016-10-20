#include<stdio.h>
void main()
{
int first,last,flag,i;
printf("Enter the range ");
Scanf("%d%d",&first,&last);
while(first<last)
{
flag=0;
for(i=2;i<=(first/2);++i)
{
if(first%2==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\n%d",first);
++first;
}
}
