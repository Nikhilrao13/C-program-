/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int n,r,sum=0,temp;
  printf("\n enter the value of n ");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
      r=n%10;
      sum=(sum*10)+r;
      n=n/10;
  }
  if(sum==temp)
  printf("\n its a palindrome");
  else
  printf("\n not a palindrome");
    return 0;
}

