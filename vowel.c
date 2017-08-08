#include<stdio.h>
#inclued<conio.h>
void main()
{
char c;
int isLowercase Vowel,isUppercase Vowel;
printf("enter an alphabet");
scanf("%c",&c);
isLowercase Vowel=(c=='a'\\c=='e'\\c=='i'\\c=='o'\\c=='u');
isUppercase Vowel=(c=='A'\\c=='E'\\c=='I'\\c=='O'\\c=='U');
if(isLowercas Vowel\\isUppercase Vowel)
{
printf("%c is a vowel",c);
}
else
{
printf("%c is a consonent",c);
}
return 0;
getch();
}
