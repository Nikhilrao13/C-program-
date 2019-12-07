/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 main()
{
    int n,r;
    printf("\n enter the n value");
    scanf("%d",&n);
    printf("\n Reverse number");
    while(n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
}


