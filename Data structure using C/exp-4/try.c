#include <stdio.h>

int main () {
    struct student {
        char *name;
        int age;
        float mobile;
        char address[20];
    };

    struct student s1,s2;
    s1.name = "Sachin";
    printf("%s",s1.name);


}