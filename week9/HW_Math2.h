#pragma once
#define BRAND_NAME_MAX_SIZE 64
#define MODEL_NAME_MAX_SIZE 64

struct point2f {

	float x;
	float y;
};
struct pointTriangle {
	struct point2f A;//little letter
	struct point2f B;
	struct point2f C;
	
};

struct circle {

	struct point2f center;
	struct point2f point;//change
	float radius;

};

struct rect2df {
	struct point2f A;
	struct point2f D;
	struct point2f point;//change
	
};

struct polygon {
	
	struct point2f points[8];
	int count;
	
};

struct VehicleShopInfo {
	int yearOfmanifacture;
	char brandName[BRAND_NAME_MAX_SIZE];
	char modelName[MODEL_NAME_MAX_SIZE];
	char VIN[26];
	long price;
};



void HW_17_02(void);
void HW_17_03(void);
void HW_17_04(void);
void HW_17_05(void);
void HW_17_06(void);
void HW_17_07(void);