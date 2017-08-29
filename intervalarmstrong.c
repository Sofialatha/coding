#include<stdio.h>
#include<conio.h>
void main()
{
int low,high,temp1,temp2,result=0,n=0;
printf("enter two intervals");
scanf("%d",&low,&high);
for(i=low+1;i<high;i++)
{
temp2=i;
temp1=i;
while(temp1!=0)
{
temp1/=10;
++n;
}
}
getch();
}
