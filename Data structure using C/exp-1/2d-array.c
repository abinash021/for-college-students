#include <stdio.h>

int main() {
    int arr[100][100], size_of_array_1, size_of_array_2, i, j;
    printf("Enter the size of the array: ");
    scanf("%d %d", &size_of_array_1, &size_of_array_2);

    for(i=0; i<size_of_array_1; i++) {
        for(j=0; j<size_of_array_2; j++) {
            printf("Enter the element %d %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n-: The elements stored in the array are :-\n\n");

    for(i=0; i<size_of_array_1; i++) {
        for(j=0; j<size_of_array_2; j++) {
            printf("arr[%d][%d] -> %d \n",i,j, arr[i][j]);
        }
    }

}