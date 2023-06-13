#include<stdio.h>
#include<limits.h>
// Задача 4.3 - продължение
// Направете го за два диапазона – жени от 25 до 30 включително
// или от 35 до 40
// включително.
// Мъже от 30-35 включително или от 40 до 45 г включително.
int main(){
    printf("Please, press 1 for woman or 2 for man: ");
    int number = 0;
    scanf("%d",&number);

    printf("Please enter you age: ");
    int age = 0;
    scanf("%d", &age);

    if(number == 1){
        if((age >= 25 && age <= 35) ||
           (age >=35 && age <=40)){
            printf("You are perfect for our research.");
        }
        else{
            printf("Sorry, you can't be part of our research.");
        }
    }
    else if(number == 2){
        if((age >= 30 && age <= 45) || (age >= 40 && age <= 45)){
            printf("You are perfect for our research.");
        }
        else{
            printf("Sorry, you can't be part of our research.");
        }
    }
}
