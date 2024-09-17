#include<stdio.h>

// declaration/prototype
void printhello();

int main() {
    
    printhello(); //function call
    printhello();
    printhello();

    return 0;
}

//function defination
void printhello(){

    printf("Hello! \n");
    printf("My name is Praveen kumar \n");
}


// write a Function that prints namaste for indian and bonjour for french.
void namaste();
void bonjour();

int main() {
    printf("enter f for french & i for indian : ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i') {
        namaste();
    } else {
        bonjour();
    }
    
    return 0;
}

void namaste() {
    printf("Namaste \n");
}
void bonjour() {
    printf("Bonjour \n");
}


// Function that prints sum of two numbers.
int sum(int a, int b);

int main() {
    int a, b;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("sum is : %d \n", s);
    return 0;
}

int sum(int x, int y) {
    return x + y;
}




void printTable(int n);

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    
    printTable(n);  //argument / actual parameter
}


void printTable(int n) {  //parameter/formal parameter
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i*n);
    }
}


