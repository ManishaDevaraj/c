 #include<stdio.h>
 void main()
 {
 char day[7];
 printf("Enter the day ");
 gets(day);
 if(day=='sunday')
 {
 printf("Working day (%s) ->False",day );
 }
 else
 {
 printf("Working day (%s) ->True",day);
 }
 }
