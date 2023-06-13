#include <stdio.h>
#include <string.h>
#include <limits.h>

// Задача 16. Да се дефинира константата Пи (3.14159...) и да се напише
// функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
// В main() да се извика горната функция с радиуси 1, 1.5, 13.

// Задача 17.* Към задача 16 да се добави втора функция, която изчислява
// лицето на елипса по зададени два параметъра ( Пи * A * B)

const float pi=3.14;

void areaOfElipse(double a, double b){
    float area = 0;
    area = a * b * pi;
    printf("The area of the elipse is: %0.4f",area);
}

void areaOfCircle(double radius){
    //const float pi = 3.14;
    float area = 0;
    area = radius * radius * pi;
    printf("Area of circle is: %0.4f\n",area);
}

int main(){
    // float radius1 = 1.0;
    // float radius2 = 1.5;
    // float radius3 = 13.0;
    // areaOfCircle(radius1);
    // areaOfCircle(radius2);
    // areaOfCircle(radius3);

    areaOfCircle(1);
    areaOfCircle(1.5);
    areaOfCircle(13);

    areaOfElipse(4.1,3);

}
