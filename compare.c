#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the values of a,b,c");
scanf("%d%d%d",%a,&b,&c);
if(a>b&&a>c)
{
printf("a is greater");
}
else if(b>c&&b>a)
{
printf("b is greater");
}
else
{
printf("c is greater");
}
getch();
}
