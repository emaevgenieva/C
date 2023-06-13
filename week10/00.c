#include<stdio.h>


enum animal
{
	e_animal_cat,
	e_animal_dog,
	e_animal_mouse,

	e_animal_count
};
const char* animal_sounds[e_animal_count] = { "meow", "bark", "squeak" };
int main(void) {
	puts(animal_sounds[e_animal_cat]);
	puts(animal_sounds[e_animal_dog]);
	puts(animal_sounds[e_animal_mouse]);
}
