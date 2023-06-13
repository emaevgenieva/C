#include <stdio.h>
#include <limits.h>
#include <string.h>

// Задача 14. Напишете глобална променлива, която увеличаваме с 1 във
// функция void test(). Извикайте функцията три пъти test() от main()
// принтирайте стойността на глобалната променлива.

static int globalVariable =13;

void test(){
    globalVariable++;
}

int main(){
    test();
    test();
    test();
    printf("Result: %d\n", globalVariable);
}
