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
    printf("\n enter the variable");
    scanf("%c",&ch);
    ch=tolower(ch);
    switch(ch)
    {
        case 'a': printf("\n it is vowel ");break;
        case 'e': printf("\n it is vowel ");break;
        case 'i': printf("\n it si vowel ");break;
        case 'o': printf("\n it si vowel ");break;
        case 'u': printf("\n it si vowel ");break;
        default : printf("\n it si consanant");
    }
}
    
