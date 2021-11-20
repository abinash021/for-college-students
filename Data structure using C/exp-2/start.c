/* 

==========> Implemenation of the stack <=========

1=> What the hell is stack?

Ans. Stack is a data structure which is used to store the data in LIFO(Last in first out) or FILO(First in last out) manner.
     It is a ADT(Abstract Data Type) having two major operations: 1 -> push() 2 -> pop().

     Graphical representation is given.
     
     Push() operation is used to insert the data in the stack.
     Pop() operation is used to delete the data from the stack.


2=> Where is the stack implemented?

Ans. Stack is implemented in undo and redo mechanism. It is also used to evaluate the prefix, postfix and infix expression.


Here we are going to implement the stack using stackay.

*/

#include <stdio.h>

int stack[100], size_of_stack=0;
int push();
int pop();
int top_element();
int display();
int main() {

    int choice;

    printf("\nEnter the operation to be performed: \n\n1-> push \n2-> pop \n3-> Top most element \n4-> Display \n5-> Exit\n\n=> ");
    scanf("%d", &choice);

    switch (choice)
    {   
    case 1:
        push();
        main();
        break;
    case 2:
        pop();
        main();
        break;
    case 3:
        top_element();
        main();
        break;
    case 4:
        display(size_of_stack);
        main();
        break;
    case 5:
        printf("\nExiting...\n\n\n");
        return 0;
    default:
        printf("\nInvalid choice... Enter a valid choice... \n");
        main();
        break;
    }
}

int push() {
    int no_of_elements;
    printf("\nEnter the number of elements you want to Enter: ");
    scanf("%d", &no_of_elements);
    if(size_of_stack+no_of_elements>100) {
        printf("Stack Overflow");
    }
    else {
        for(int i=0; i<no_of_elements; i++) {
            scanf("%d", &stack[size_of_stack]);
            size_of_stack++;
        }
    }
}

int pop() {
    if(size_of_stack==0) {
        printf("Stack Underflow");
    }
    else {
        printf("%d is popped out", stack[size_of_stack-1]);
        size_of_stack--;
    }
}
int top_element() {
    if(size_of_stack==0) {
        printf("\nStack is empty\n");
    }
    else {
        printf("%d is the top most element", stack[size_of_stack-1]);
    }
}
int display(int size_of_stack) {
    if(size_of_stack==0) {
        printf("Stack is empty");
    }
    else {
        for(int i=size_of_stack-1; i>=0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}