// Напишете функция, която изчислява произведението на всички
// цели числа в даден интервал [min, max]
#include<stdio.h>

int product(int begin, int end){
    int product =1;
    for(int i=begin; i<=end; i++){
        product=product*i;
    }
    return product;
}

int main(){
    int result = product(1,5);
    printf("%d",result);
}
