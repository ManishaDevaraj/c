 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 void main()
 {
 int num;
 char buffer[20];
 printf("Enter the integer value");
 scanf("%d",&num);
 itoa(num,buffer,2);
 printf("\n The binary value of %d is %s",num,buffer);
 }
