#include<stdio.h>
#include<string.h>

//const int lucky_number = 13;

int main(){
    const int lucky_number = 13;
    int n=0;
    scanf("%d",&n);
    if(n >= lucky_number){
        printf("Печелите!");
    }
    else if(n < lucky_number){
        printf("Опитай отново!");
    }   
}
