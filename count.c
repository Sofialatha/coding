#include<stdio.h>
#include<conio.h>
void main()
{
long long n;
int count=0;
printf("enter the integer");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("the count of number is:%d",count);
getch();
}
