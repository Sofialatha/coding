#include<stdio.h>
#include<conio.h>]
void main()
{
int counter;
printf("the even numbers are");
for(counter=1;counter<=60;counter++)
{
if(counter%2==0)
{
printf("%d",counter);
}
}
getch();
}
