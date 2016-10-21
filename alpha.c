 #include<stdio.h>
 void main()
 {
 int a[26]={0},i,,len,temp1=0,temp2;
 char ch,input[20],output[20];
 printf("Enter the string ");
 gets(input);
 len=strlen(input);
 for(i=0;i<len;i++)
 {
 ch=input[i]-'a';
 a[ch]++;
 }
 for(ch='a';ch<='z';ch++)
 {
 temp2=ch-'a';
 }
 for(i=0;i<a[temp2];i++)
 {
 output[temp1]=ch;
 temp1++;
 }
 output[temp1]='\n';
 printf("\n%s",output);
 }
