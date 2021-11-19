
/*
1=> What is a header file?

Ans. A header file is a file that contains only declarations of functions, variables, and macros.
     Functions like printf(), scanf(), malloc(), free(), etc. are declared in header files. So that 
     they can be used throughout the program. In this program, we are using the header file "stdio.h" because
     we used the printf() function which comes under the header file "stdio.h".

     Check more about header files in the link below:- 

        https://www.geeksforgeeks.org/header-files-in-c/

2=> What is a function?

Ans. A function is a block of statements that together perform a task (Ex:- Here main() function printing hello world).
     A function can be defined as  a set of statements that perform a task. A function can be called by specifying 
     its name and passing the required arguments (Here printf() taking a string as an argument and send formatted 
     output to the screen ).

     Declaring a function:-

        void function_name(argument_type argument_name or parameter_list ) {
            // statements
        }
     A function declaration is a statement that tells the compiler about a function's name, return type, and parameters.

     int main() {

     }
     Here int is the return type of the function and main is the name of the function. Statements are the lines 
     of code that are executed when the function is called. It is written inside curly braces {}.

     Calling a function:-

        function_name(argument_list);

        Here argument_list is the list of arguments that are passed to the function. If you can't understand WTF
        is argument_list, then check the link below to learn more :-

            https://www.geeksforgeeks.org/function-calls-in-c/

3=> What is main function?

Ans. An operating system always calls the main() function when a programmers or users execute their programming code.
    -> It is responsible for starting and ends of the program.
    -> It is a universally accepted keyword in programming language and cannot change its meaning and name.
    -> A main() function is a user-defined function in C that means we can pass parameters to the main() function 
       according to the requirement of a program.
    -> A main() function is used to invoke the programming code at the run time, not at the compile time of a program.
    -> A main() function is followed by opening and closing parenthesis brackets.


*/

#include <stdio.h> //header file

int main() { //main function
    printf("Hello World"); //printing hello world
}