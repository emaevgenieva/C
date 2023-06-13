#include<stdio.h>
// Трябва да направите софтуер за заявки на хотел. Хотела има два типа стаи -
// Луксозна, с цена 180 лв на нощ, 
// Стандартна -120 лв на
// Туристическият данък е 6%.
// Направете програма, която
// калкулира очаквана себестойност за клиентите в зависимост от брой
// нощувки и стаи, и я отпечатва на екрана. Валидността на офертата е
// 14 дни

int main(){
    int room = 0;
    int days = 0;

    printf("Please, select the room you'd like to use.\nPress 1 for Luxury room and 2 for Standart room: ");
    scanf("%d", &room);
    
    printf("Please, enter the days you'd like to stay(Capacity = 14): ");
    scanf("%d", &days);

    float sum = 0.0;
    switch (room){
    case 1:
        if(days <= 14){
            sum = days*180 + (days*180)*0.06;
            printf("Total sum is %.2f",sum);
        }
        else{
            printf("Invalid operation!");
        }
        break;

    case 2:
        if(days <= 14){
            sum = days*120 + (days*120)*0.06;
            printf("Total sum is %.2f",sum);
        }
        else{
            printf("Invalid operation!");
        }
        break;

    default:
        printf("Invalid operation!");
        break;
    }
}
