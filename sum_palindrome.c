 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int num,rem1=0,rem2=0,sum1=0,sum2;
 printf("Enter the number ");
 scanf("%d",&num);
 printf("SUM OF DIGIT");
 while(num!=0)
 {
 rem1=num%10;
 sum1=sum1+rem1;
 num=num/10;
 }
 printf("The sum of digit is %d",sum1);
 printf("PALINDROME OR NOT");
 int temp;
 temp=sum1;
 while(sum1!=0)
 {
 rem2=sum1%10;
 sum1=sum1/10;
 sum2=sum2*10+rem2;
 }
 if(temp==sum2)
  printf("%d is palindrome",temp);
 else
  printf("%d is not palindrome",temp);
  
 getch();
 }
 
 
 
 
 
