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
    printf("\n enter the date");
    scanf("%d",&a);
    char ch;
    switch(a)
    {
        case 1: printf("\n sunday %d");break;
        case 2: printf("\n monday %d");break;
        case 3: printf("\n tueday %d");break;
        case 4: printf("\n wedneday %d");break;
        case 5: printf("\n thursday %d");break;
        case 6: printf("\n friday %d");break;
        case 7: printf("\n saturday %d");break;
        default : printf("\n invalid day");
    }
}
    
