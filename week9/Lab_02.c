#include<stdio.h>
#include<string.h>

#define BRAND_NAME 64
#define MODEL_NAME 64

//char brandName[BRAND_NAME] = { "Opel Mazda Toyota Volkswagen" };
//char modelName[BRAND_NAME] = { "Omega, Mazdeta, Corola, Passat" };
struct VehicleShopInfo {
	unsigned short yearOfmanifacture;
	 char brandName[BRAND_NAME];
	char modelName[MODEL_NAME];
	char VIN[26];
	long long price;
};

int main(void) {

	struct VehicleShopInfo cars[2] =
	{
		{
			.yearOfmanifacture = 2004,
			.brandName = { "Opel Mazda Toyota Volkswagen" },
			.modelName = { "Omega, Mazdeta, Corola, Passat" },
			.VIN = "BG123HSHS15",
			.price = 2500

		},
		{
			.yearOfmanifacture = 2021,
			.brandName = {"Fiat, Ford, Merzedes"},
			.modelName = {"Punto, Focus, Benz"},

		}

	};
}