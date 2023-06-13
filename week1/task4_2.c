#include <stdio.h>
#include <limits.h>
// Задача 4.2 - продължение
// Направете задачата за точна възраст - за жени 25-35
// За мъже 30 или 40 години.
int main(){
    printf("Please, press 1 for woman or 2 for man.\n");
    int number = 0;
    scanf("%d",&number);

    printf("Please enter you age: ");
    int age = 0;
    scanf("%d", &age);

    if(number == 1){
        if(age == 25 || age == 35){
            printf("You are perfect for our research.");
        }
        else{
            printf("Sorry, you can't be part of our research.");
        }
    }
    else if(number == 2){
        if(age == 30 || age == 40){
            printf("You are perfect for our research.");
        }
        else{
            printf("Sorry, you can't be part of our research.");
        }
    }
}
