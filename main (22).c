/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    for(a=10;a>=1;a--)
    {
        for(b=1;b<=20;b++)
        {
            printf("\n %d X %d=%d",a,b,a*b);
        }
        printf("\n\n");
    }
    
}