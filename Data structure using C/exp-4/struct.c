// create a struct to store the information of a student

#include <stdio.h>

int main () {
    struct student {
        char name[20];
        int age;
        float mobile;
        char address[50];
    };

    struct student s1;
    printf("Enter the name of the student: ");
    scanf("%[^\n]",s1.name);
    printf("Enter the age of the student: ");
    scanf("%d",&s1.age);
    printf("Enter the mobile number of the student: ");
    scanf("%f",&s1.mobile);
    printf("Enter the address of the student: ");
    scanf("%[^\n]",s1.address);
    printf("Printing Student Details:\n");
    printf("%s\n%d\n%.0f\n%s",s1.name,s1.age,s1.mobile,s1.address);

    return 0;
}