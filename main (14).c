/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a;
    printf("\n enter the value");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
    printf("\n it is divisible");
    else
    printf("\n it is not divisible");
}
