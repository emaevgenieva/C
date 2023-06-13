#include <stdio.h>
#include<string.h>

typedef enum animalType { T1_Herbivore, T2_Carnivore, T3_Omnivore }animalType;
typedef struct Animal {
	char* name;
	animalType type;
	struct Animal* next;
}Animal, * ANIMAL_PTR;

void print_animal(ANIMAL_PTR);
void printInfo(Animal arr[3], animalType type);
int main(void) {
	Animal Animal_arr[3] =
	{
		{
			.name = "Sheep",
			.type = T1_Herbivore
		},
		{
			.name = "Dog",
			.type = T2_Carnivore

		},
		{
			.name = "Pig",
			.type = T3_Omnivore
		}
	};

	animalType type = 3;
	
	printInfo(Animal_arr, type);
}
void printInfo(Animal arr[3], animalType type) {
	
	
	for (int i = 0; i < type; i++)
	{
		printf("%s -> %d\n", arr[i].name, arr[i].type);
		
	}
	
}