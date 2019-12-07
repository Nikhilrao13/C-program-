/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a,b,n;
    printf("\n enter the values");
    scanf("%d%d",&a,&b);
    printf("\n 1.Addition \n 2. substaract \n 3.Multiplication \n 4.Division");
    printf("\n enter the choice");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("\n sum is  %d",a+b);break;
        case 2: printf("\n diff is  %d",a-b);break;
        case 3: printf("\n product is  %d",a*b);break;
        case 4: printf("\n division is  %d",a%b);break;
        default : printf("\n invalid choice");
    }
}
    
