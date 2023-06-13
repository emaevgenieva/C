
#include<stdio.h>
#include<string.h>

struct VehicleShopInfo {
	unsigned short yearOfmanifacture;
	const char* brandName;
	const char* modelName;
	char VIN[26];
	long long price;
};
int main(void) {

	struct VehicleShopInfo car = {
		.yearOfmanifacture = 2014,
		.brandName = "Fiat",
		.modelName = "Punto",
		.VIN = "1234RGH56",
		.price = 1500
	};

	struct VehicleShopInfo car1 = {
		.yearOfmanifacture = 2020,
		.brandName = "Volkswagen",
		.modelName = "Passat",
		.VIN = "54654UR5",
		.price = 100000
	};

	printf("%u, %s, %s, %s, %lu\n", car.yearOfmanifacture, car.brandName, car.modelName, car.VIN, car.price);
	printf("%u, %s, %s, %s, %lu", car1.yearOfmanifacture, car1.brandName, car1.modelName, car1.VIN, car1.price);
}
