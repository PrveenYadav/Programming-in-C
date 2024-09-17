#include<stdio.h>

// Make a program that inputs user's name and prints its length. 

int countLength(char arr[]);

int main(){
char name[100];
fgets(name, 100, stdin);
printf("Length is : %d", countLength(name));

}

int countLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;
}