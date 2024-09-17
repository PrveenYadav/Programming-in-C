#include <stdio.h>
#include <string.h>

// struct is a user defined Data type.
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Vicky");

    // or, we can initialize in a singel line.
    // struct student s1 = {1664, 9.2, "Vicky"};

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    struct student *ptr = &s1;                  // we can print structure in pointers also
    printf("student roll = %d\n", (*ptr).roll); // printing roll no.
    // We must write in Arrow Operator, (*ptr).code  =>  ptr->code (Arrow Operator)

    return 0;
}

// We can also pass Structures to Function.
void printinfo(struct student s1);

int main()
{
    struct student s1 = {1664, 9.2, "Vicky"};
    printinfo(s1);

    return 0;
}

void printinfo(struct student s1)
{
    printf("student information : \n");

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
}

// typedef keyword
typedef struct computerengineeringstudent
{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main()
{
    coe s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Vicky");

    printf("student name is %s\n", s1.name);

    return 0;
}

// Qwe - Enter adress(house no, block, city, state) of 5 people.

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main()
{
    struct address adds[5];
    // input
    printf("enter info for person 1 : ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);

    printf("enter info for person 2 : ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", &adds[2].city);
    scanf("%s", &adds[2].state);

    printf("enter info for person 3 : ");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", &adds[3].city);
    scanf("%s", &adds[3].state);

    printf("enter info for person 4 : ");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", &adds[4].city);
    scanf("%s", &adds[4].state);

    printf("enter info for person 5 : ");
    scanf("%d", &adds[5].houseNo);
    scanf("%d", &adds[5].block);
    scanf("%s", &adds[5].city);
    scanf("%s", &adds[5].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}

void printAdd(struct address add)
{
    printf("address is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}