 #include<stdio.h>
 void main()
 {
 int num,rev=0;
 printf("Enter the digit to reverse");
 scanf("%d",&num);
 while(num!=0)
 {
 rev=num%10;
 rev=rev+num%10;
 num=num/10;
 }
 printf("The reverse of the given digit is %d",rev);
 }
