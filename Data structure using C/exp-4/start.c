//what is structure and unions in C ?
//
// Ans: Structure is a collection of data members. It is used to group data members together.
// It mainly used to store different data types. It is also used to store data in a single memory location.
// It helps to construct a complex data type which will be more meaningful to the user. 
// You can imagine it as an array which holds different data types. Ex: suppose you want to write
// a program which will store different information about a student like Name, age, mobile number and addresses which 
// includes string, integer, and float values. I can't use an array for storing all these values because 
// an array can store only one type of data. So, I can use a structure to store all these values.

// Ex:- 

#include <stdio.h>
int main() {
    struct student {
        char name[20];
        int age;
        float mobile;
        char address[20];
    };

    // I created a structure called student which has 4 data members. Let's see how to store different student
    // details in a structure. Example - 1

    struct student basu = {"Basu", 19, 7735773577, "Bhubaneswar"};
    struct student santosh = {"Santosh", 19, 9861986198, "Delhi"};
    struct student chinmay = {"Chinmay", 23, 6371637163, "Kolkata"};

    // You can assign values like this example - 2

    struct student Abhi = {"Abhi", 19, 9861986198, "Delhi"}, Amiya = {"Amiya", 19, 9861986198, "Delhi"};

    // You can store values using dot operator.

    // Declaring a structure variable name Amit
    struct student Amit;

    // Assigning values to structure variable Amit using dot operator

    // Amit.age = 19; // Amit.age is the age of Amit. This is how you assign values to structure variable.
    // Amit.mobile = 9861986198; // This is amit's mobile number assigned using dot operator.

    Amit.name[20] = "Amit"; // This is amit's name assigned using dot operator. Butttttttt this is wrong. 
  

    // Reason ? Because Amit.name is a string and not an integer or character. 
    // and in Left side you are using an array time and this is not assignable.
    // Remember:- An assignment operator shall have a modifiable lvalue as its left operand.
    // (A modifiable lvalue is an lvalue that does not have array type)

    // You might have a question that how it worked in exaple:- 1 and 2 ?
    // struct student basu = {"Basu", 19, 7735773577, "Bhubaneswar"}; works fine, because this is not a direct assignment involving assignment operator. 
    // There we're using a brace-enclosed initializer list to provide the initial values of the object. 
    // That follows the law of initialization.

    // If you have 
    char string[] = "some string input";
    char *variable_name = "some value";
    // orr
    variable_name = "Another value";
    // All of these things works fine but you can't do something as below:-
    // char c = "string input"; //Wrong : Because You can't assign a string to a character.

    // Let's understand why amit's name assigned using dot operator went wrong ?

    // Amit.name[20] has the type char, Moreover there is present an access to memory beyond the array because the 
    // valid range of indices for the array is [0, 19]. So, Amit.name[20] is not a valid index. Here you are trying to access 
    // the memory beyond the array. So in this case compiler will issue a message.
    // On the other hand, the expression with the string literal "Sachin" used as an assignment expression has the type char *.

    // You need to initialize the array when an object of the structure type is defined like
    struct student Amit = { .name = "Sachin" };

    // or
    // Or after defining the object you can copy the string literal in the array like

    // #include <string.h>
    //...
    // struct student Amit;
    // strcpy( Amit.name, "Sachin" );
 

}

// UNIONS:-
// A union is a collection of variables of different data types. The difference between a union and a structure 
// is that a union can have more than one member whereas a structure can have only one member. 
// 