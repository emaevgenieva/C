#include<stdio.h>
#include<limits.h>
// Задача 5. switch
// Създайте програма, която подканя човека да въведе проста
// аритметична операция с две числа от екрана - събиране, изваждане,
// деление, умножение и отпечатва резултата.
// Помислете какви променливи и колко трябва да имате? Колко са
// вариантите, които можете да имате, като операции, има ли
// изключителни случаи, за които трябва да помислим (напишете си ги)?
int main(){
    printf("You can choose between these operations:\n");
    printf("\nFor addition press '+'.\nFor substraction press '-'.\nFor multiplication press '*'.\nFor division press '/'.\n");
    printf("Please, enter the operation you would like to use: ");
    char operation;
    scanf("%s",&operation);
    
    int a=0;
    int b=0;
    printf("Please enter two random numbers: ");
    scanf("%d %d", &a, &b);
    
    int result = 0;
    switch (operation)
    {
    case '+':
        result = a+b;
        printf("%d",result);
        break;
    case '-':
        result = a-b;
        printf("%d", result);
        break;
    case '*':
        result = a*b;
        printf("%d",result);
        break;
    case '/':
        result= a/b;
        printf("%d", result);
        break;
    default:
        break;
    }
}
