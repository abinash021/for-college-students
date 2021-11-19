/*
    C program to demonstrate Input Output of primitive data types

1=> What are data types in C?

Ans. Data types are the fundamental units of data in C.


Detailed list of data types in C:-

Data Types	        Memory Size	        Range


char	               1 byte	      −128 to 127

signed char	           1 byte	      −128 to 127

unsigned char	       1 byte	        0 to 255

short	               2 byte	       −32,768 to 32,767

signed short	       2 byte	       −32,768 to 32,767

unsigned short	       2 byte	       0 to 65,535

int	                   2 byte	       −32,768 to 32,767

signed int	           2 byte	       −32,768 to 32,767

unsigned int	       2 byte	        0 to 65,535

short int	           2 byte	       −32,768 to 32,767

signed short int	   2 byte	       −32,768 to 32,767

unsigned short int	   2 byte	        0 to 65,535

long int	           4 byte	        -2,147,483,648 to 2,147,483,647

signed long int	       4 byte	        -2,147,483,648 to 2,147,483,647

unsigned long int	   4 byte	        0 to 4,294,967,295

float	               4 byte	        -3.4E38 to -1.7E-38 to 1.7E-38 to 3.4E38

double	               8 byte	        -1.7E308 to -2.2E-308 to 2.2E-308 to 1.7E308

long double	           10 byte	        3.4E-4932 to 1.1E+4932


 In simple words, data types define the type of data that can be stored in a variable.

    example: int a;
    a is of type int. It can store any integer value such as 0, 1, 2, -1, -2.

Learn more about data types, links: 

    https://www.geeksforgeeks.org/data-types-in-c/

*/


//C program to demonstrate Input Output of primitive data types


#include <stdio.h>

int main()
{
    //declaring variables
    char ch;
    int i;
    float f;
    double d;
    long double ld;

    //initializing variables
    ch = 'A';
    i = 10;
    f = 10.5;
    d = 1873829380.232325;
    ld = 1987290.99988888;

    //printing variables
    printf("%c\n", ch);
    printf("%d\n", i);
    printf("%f\n", f);
    printf("%lf\n", d);

    //look at this line carefully, I used __mingw_printf() function instead of printf() function 

    __mingw_printf("%Lf\n", ld);

    // Reason ? Okey ! printf() and scanf() functions in C/C++ used microsoft C library and this library 
    // has no support for 10 byte long doubble. So if you will use printf(), and scanf() functions to print and
    // read long double data type, then you will always give you wrong result.


    // If you want to use long double data type, then you have to use __mingw_printf() and __mingw_scanf() functions.
    // It has support for 10 byte long double. orrrrrrr

    // You can define two marcros like this : "#define __mingw_printf()" and "#define __mingw_scanf()".
    
    return 0;
}