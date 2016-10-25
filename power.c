 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
 int base,expo,result;
 printf("Enter the base number");
 scanf("%d",&base);
 printf("Enter the exponent number");
 scanf('%d",&expo);
 result=pow(base,expo);
 printf("The result is %d",result);
 getch();
 }
 
