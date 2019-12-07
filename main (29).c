/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 main()
{
    int a,n;
    printf("\n enter the n value");
    scanf("%d",&n);
    if(n%2==1)
     n=n-1;
    while(n>=2)
    {
        printf("\n %d",n);
        n-=2;
    }
}


