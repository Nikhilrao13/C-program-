/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    char ch;
    printf("\n enter a character :");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("\n upper case");
    if(ch>=97 && ch<=122)
    printf("\n lower case");
    if(ch>=48 && ch<=57)
    printf("\n its a digit");
    return 0;
}
