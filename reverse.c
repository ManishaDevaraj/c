#include<stdio.h>
#include<conio.h>
void main()
{
   int i, j, k;
   char s[100];
   char r[100];
   printf("Enter a string\t");
   scanf("%s", s);
   printf("The original string is %s", str);
   for(i = 0; s[i] != '\0'; i++);
   {
      k = i-1;
   }
   for(j = 0; j <= i-1; j++)
   {
      r[j] = s[k];
      k--;
   }
   printf("The reverse string is %s", r);
   getch();
}
