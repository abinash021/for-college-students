#include <stdio.h>

int main() {
    int arr[100], size_of_array, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size_of_array);

    for(i=0; i<size_of_array; i++) {
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n-: The elements stored in the array are :-\n\n");

    for(i=0; i<size_of_array; i++) {
        printf("arr[%d] -> %d \n",i, arr[i]);
    }
}