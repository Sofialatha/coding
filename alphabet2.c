#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if((c>='a'&&c<='z')\\(c>='A'&&c<='Z'))
{
printf("the character is an alphabet");
}
else
{
printf("the alphabet is not an alphabet");
}
getch();
}
