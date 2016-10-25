 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 char a[10],b[20];
 int len,i,j,k=0,count=0;
 printf("Enter the string");
 scanf("%s",&a);
 len=strlen(a);
 for(i=0;i<len;i++)
 {
 for(j=0;j<i;j++)
 {
 if(a[i]==b[j])
 {
 count=1;
 }
 }
 if(count==0)
 {
 b[k++]=a[i];

 }
 count=0;
 }

 for(j=0;j<strlen(b);j++)
 {
 printf("%c",b[j]);
 }
 }

