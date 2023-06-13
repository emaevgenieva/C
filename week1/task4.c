#include<stdio.h>
#include<limits.h>
// За целите на научно изследване търсите хора, 
//които отговарят на следните критерии
// Жени на възраст от 25 до 35 години.
// Мъже на възраст от 30 до 40 години.
// Правите онлайн проучване, в което кандидатите 
//въвеждат данните си и вие трябва да им кажете, дали
// са подходящи или не. Ползвайте променливи за пол 
//и възраст.

// 1. Моля въведете 1 за жена, 2 за мъж.
// 2. Моля въведете вашата възраст.
// 3. Сравняваме, ако пол=1, за възраст от 25 до 35 казваме
//    подходяща.
// 4. Ако е различно казваме, „Съжалявам не сте подходяща“.
// 5. Ако пол е въведено 2, за възраст сравняваме 30-40, 
//    изписваме подходящ.
// 6. Ако е различно „Съжалявам, не сте подходящ“
int main(){
    printf("Please, press 1 for woman or 2 for man.\n");
    int number = 0;
    scanf("%d",&number);

    printf("Please enter you age: ");
    int age = 0;
    scanf("%d", &age);

    if(number == 1){
        if(age >=25 && age <= 35){
            printf("You are perfect for our research.");
        }
        else{
            printf("Sorry, you can't be part of our research.");
        }
    }
    else if(number == 2){
        if(age >= 30 && age <= 40){
            printf("You are perfect for our research.");
        }
        else{
            printf("Sorry, you can't be part of our research.");
        }
    }

}
