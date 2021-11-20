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
        printf("Stack Overflow"); // if stack is full
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
        printf("\nStack Underflow\n");
    }
    else {
        printf("\n%d is popped out\n", stack[size_of_stack-1]);
        size_of_stack--;
    }
}

int top_element() {
    if(size_of_stack==0) {
        printf("\nStack is empty\n");
    }
    else {
        printf("\n%d is the top most element\n", stack[size_of_stack-1]);
    }
}

int display(int size_of_stack) {
    if(size_of_stack==0) {
        printf("Stack is empty");
    }
    else {
        for(int i=size_of_stack-1; i>=0; i--) {
            printf("\n%d ", stack[i]);
        }
        printf("\n");
    }
}