# C program to implement queue using array

```c

#include<stdio.h>
#include<stdlib.h> 

#define max 5

int rear=-1,front=-1;
int queue[max];   

void insert();
int delete();
void display();

void main()
{
    int w,num;
    while(1)
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. EXIT");
        printf("\nEnter What you want :");
        scanf("%d",&w);
        if(w==1)
            insert();
        else if(w==2)
            num=delete();
        else if(w==3)
            display();
        else if(w==4)
            exit(1);
        else printf("\nInvalid Choice!!");

    }

}

void insert()
{
    int num;
    if(rear==max-1){
        printf("\nQueue is Full !\n");
        return;
    }
    printf("\nEnter a number for insert :");
    scanf("%d",&num);
    if(front==-1)
        front=front+1;

    rear=rear+1;
        queue[rear]=num;

}

int delete()
{
    int num;
    if(front==-1 || front==rear+1)
    {
        printf("\nQueue is Empty !\n");
        return 0;
    }
    num=queue[front];
    printf("\n%d was deleted !\n",num);
    front=front+1;
}

void display()
{
    int i;
    if(front==-1 || front==rear+1)
    {
        printf("\nQueue Is Empty ! Nothing To Display !!");
        return;
    }
    printf("\n\n");
    for(i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
        printf("\n");
}

```
# OUTPUT

```

user@DESKTOP-0RT68SG MINGW64 ~/Desktop/d
$ gcc qq.c

user@DESKTOP-0RT68SG MINGW64 ~/Desktop/d
$ ./a.exe

1. Insert 
2. Delete 
3. Display
4. EXIT   
Enter What you want :1

Enter a number for insert :5

1. Insert
2. Delete
3. Display
4. EXIT
Enter What you want :1

Enter a number for insert :9

1. Insert
2. Delete
3. Display
4. EXIT
Enter What you want :3


5       9

1. Insert
2. Delete
3. Display
4. EXIT
Enter What you want :2

5 was deleted !

1. Insert
2. Delete
3. Display
4. EXIT
Enter What you want :3


9

1. Insert
2. Delete
3. Display
4. EXIT
Enter What you want :

```