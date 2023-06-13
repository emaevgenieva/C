#include<stdio.h>
#include<string.h>

int main(){
    printf("Enter you height: ");
    int height = 0;
    scanf("%d",&height);
    if(height >= 146 && height <=180){
        printf("You're classified as a not so short person.");
    }
    else if(height >=181 && height <=205){
        printf("You're classified as a tall person.");
    }
    else if(height > 205){
        printf("You're classified as a too tall person.");
    }
    else{
        printf("Short people problems.");
    }
}
