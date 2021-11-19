/*
================ Array =================

=> Loops
Ans: Loops are used to iterate over the elements of an array.
     Similar to the way we iterate over the elements of a list, we can iterate over the elements 
     of an array using a loop.

     Suppose we have an array of size 5 and we want to print the elements of the array.
     Example:- int marks[5] = {100, 50, 60, 70, 80};
        We can do it in the following way −
        for(int i = 0; i < 5; i++) -> This loop will run 5 times i.e. 5 times the loop will be executed.
        {
            printf("%d", marks[i]); -> This will print the value of the element at index i of the array marks.
        }

    To learn more about loops, check out the following links :−

    https://www.geeksforgeeks.org/for-loop-c/
    https://www.geeksforgeeks.org/while-loop-c/
    https://www.geeksforgeeks.org/do-while-loop-c/


    Youtube reference :- https://youtu.be/A_IgufxmIHk ( Hindi )
                         https://youtu.be/BpeIfof3VBk ( English )
                         
     
1 -> What is an array?

Ans: An array is a collection of similar data elements stored at 
     contiguous memory locations. It is the simplest data structure 
     where each data element can be accessed directly by only using its 
     index number.


2 -> How to declare an array?
Ans: An array is declared using the following syntax:
     To declare an array in C, a programmer specifies the type of the elements 
     and the number of elements required by an array.
=>   Data_type arrayName [ arraySize ];
     Example: int a[10]; (a, the name of the array, is an array of 10 integers, int is the data type i.e. only integers 
     are allowed to be stored in the array, and 10 is the number of elements in the array)


3 -> How to initialize an array?

Ans: An array can be initialized by assigning values to the elements of the array.
     You can initialize an array in C either one by one or using a single statement as follows −

int marks[5] = {100, 50, 60, 70, 80};
The number of values between braces { } cannot be larger than the number of elements that we declare 
for the array between square brackets [ ].

If you omit the size of the array, an array just big enough to hold the initialization is created. 
Therefore, if you write −

int marks[] = {100, 50, 60, 70, 80, 99};
You will create exactly the same array as you did in the previous example. Following is an example 
to assign a single element of the array −

marks[4] = 70;

4 -> How to access elements of an array?
Ans: An element is accessed by indexing the array name. This is done by placing the index of the 
element within square brackets after the name of the array. For example −

int history = marks[4]; -> History is the value of the element at index 4 of the array marks i.e 70.

5 -> How to change an element of an array?
Ans: An element can be changed by assigning a new value to the element.
     For example − marks[4] = 80; -> marks[4] is the element at index 4 of the array marks and 80 is 
     the new value assigned to it.

6 -> How to print an array?
Ans: To print an array, we use the following syntax −
     printf("%d", arrayName[index]);

     If you want to print the value of marks[4], you need to write − printf("%d", marks[4]);

     For printing the entire array, you need to write a loop for that.
     Example code is given below enjoy !!

============ Multidimensional arrays ============

* C supports multidimensional arrays.
* A multidimensional array is an array that contains one or more arrays. In other words, 
  a multidimensional array is an array that contains arrays. Multidimension means having 
  more than one dimension. 2D and 3D arrays are examples of multidimensional arrays.
* A multidimensional array is declared using the following syntax −

  Data_type arrayName [ arraySize1 ][ arraySize2 ];

  Example: int marks[3][5];
              This is a 3-dimensional array. It contains 3 arrays of 5 elements each.

  This declares an array of 3 rows and 5 columns.
  =>  Each row is an array of 5 elements.
  ->  The number of elements between braces { } cannot be larger than the number of elements that we declare 
      for the array between square brackets [ ].

  =>  The number of elements between square brackets [ ] cannot be larger than the number of dimensions 
      that we declare for the array.
    ->  The number of dimensions cannot be larger than the number of elements that we declare for the array.
         Example: int marks[3][5][2];
                    This is a 3-dimensional array. It contains 3 arrays of 5 arrays of 2 elements each.

    ->  This declares an array of 3 rows and 5 columns and 2 layers.
        The number of elements between braces { } cannot be larger than the number of elements that we declare 
        for the array between square brackets [ ].

  **The number of elements between square brackets [ ] cannot be larger than the number of dimensions**
  that we declare for the array.

  Example: int marks[3][5][2][4];

  -> This declares an array of 3 rows and 5 columns and 2 layers and 4 layers.
     The number of elements between braces { } cannot be larger than the number of elements that we declare 
     for the array between square brackets [ ].

  -> The number of elements between square brackets [ ] cannot be larger than the number of dimensions 
     that we declare for the array.
        Example: int marks[3][5][2][4][6];

  -> This declares an array of 3 rows and 5 columns and 2 layers and 4 layers and 6 layers.
     The number of elements between braces { } cannot be larger than the number of elements that we declare 
     for the array between square brackets [ ].

     The number of elements between square brackets [ ] cannot be larger than the number of dimensions 
     that we declare for the array.


*/


#include <stdio.h>

int main() {

 // Initializing an 1D array of 5 elements
    int a[5];

    printf("Enter the Elements to be stored:- ");

 // Accepting the elements to be stored in the array
 // Using a for loop for accepting the elements so that you don't have to repeat the 
 // same code(i.e:- scanf("%d",&a[0]); scanf("%d", &a[1]).....) 5 times.

    for(int i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }

 // Printing the elements of the array using a for loop so that we don't have to repeat the code again and again.

    printf("\n-: The elements stored in the 1D array are :-\n\n");

    for(int i=0; i<5; i++) {
        printf("a[%d] -> %d \n",i, a[i]);
    }

/*
    Program to print 3d array
*/

 // Initializing a 3D array of 3 rows and 5 columns and 2 layers
 
    int array[3][5][2];

    printf("\nEnter the Elements to be stored:- ");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<5; j++) {
            for(int k=0; k<2; k++) {
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    printf("\n-: The elements stored in the 3D array are :-\n\n");

    for(int i=0; i<3; i++) {
        for(int j=0; j<5; j++) {
            for(int k=0; k<2; k++) {
                printf("b[%d][%d][%d] -> %d \n",i,j,k, array[i][j][k]);
            }
        }
    }


}