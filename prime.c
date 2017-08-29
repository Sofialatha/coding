#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("the number is palindrom");
}
else
{
printf("the number is not a palindrom");
}
getch();
}
