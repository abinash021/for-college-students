
#include <stdio.h>

int main()
{
    int a;
    int * p; //pointer declaration
    p = &a; //pointer initialization
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Pointer value of %d is: %p\n",a, p); //printing the value of a

    printf("\n\nSome other way to print the value of %d\n\n",a);

    printf("Value of a is %d",a);
    printf("\nValue of a is %d",*p); //printing the value of a using pointer
    printf("\nValue of a is %d",*&a); //printing the value of a using pointer
    printf("\nValue of a is %d",*&*p); //printing the value of a using pointer
    printf("\nValue of a is %d",*&*&a); //printing the value of a using pointer
    printf("\nValue of a is %d",*&*&*p); //printing the value of a using pointer
    printf("\nValue of a is %d",*&*&*&a); //printing the value of a using pointer


    printf("\n\nSome other way to print the address of %d\n\n",a);

    printf("Address of a is %p",&a);
    printf("\nAddress of a is %p",&*p); //printing the address of a using pointer
    printf("\nAddress of a is %p",&*&a); //printing the address of a using pointer
    printf("\nAddress of a is %p",&*&*p); //printing the address of a using pointer
    printf("\nAddress of a is %p",&*&*&a); //printing the address of a using pointer
    printf("\nAddress of a is %p",&*&*&*p); //printing the address of a using pointer
    printf("\nAddress of a is %x",&a); //printing the address of a using pointer

    return 0;
}