#include <stdio.h>

int MAX_size=8;
int stack[8];
int top=1;
int is_empty() {
    if(top==1)
        return 1;
    else
        return 0;
}
int is_full() {
    if(top==MAX_size)
        return 1;
    else
        return 0;
}
int peek() {
    return stack[top];
}
int pop() {
    int data;
    if(!is_empty()) {
        data=stack[top];
        top--;
        return data;
    }
    else
        printf("Stack is empty\n");
}
void push(int data) {
    if(!is_full()) {
        top++;
        stack[top]=data;
    }
    else
        printf("Stack is full\n");
}


int main() {
    push(3);
    push(5);
    push(7);
    push(9);
    push(11);

    printf("Element at top of the stack is %d\n", peek());
    printf("Elements: \n");
    while(!is_empty()) {
        int data = pop();
        printf("%d \n", data);
    }
    printf("Stack is full: %s\n", is_full()?"Yes":"No");
    printf("Stack is empty: %s\n", is_empty()?"Yes":"No");

}