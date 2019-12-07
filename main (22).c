/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\n enter the value of a,b,c ");
    scanf("%d%d%d",&a,&b,&c);
    printf(a==b && b==c ? "a is big":b>c ? "b is big":"c is big");
}

