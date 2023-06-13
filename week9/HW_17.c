#include "HW_Math2.h"
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

struct circle circle;
struct pointTriangle triangle;
struct point2f point;
struct rect2df rectangle;
struct polygon polygon;
void print_struct_object(const struct VehicleShopInfo* cars);

int point_on_circle(struct circle* circle);
int two_cercles_have_touch_points(struct circle* circle, struct circle* secondCircle);
int point_on_rectangle(struct rect2df* rectangle);
float Two_Cercels_Have_The_Tuch_Points(struct circle* circle);
float distance_between_two_points(struct pointTriangle* triangle);

void read_input_cercle_point(struct circle* cirlce);
void read_input_two_cercles_touch_points(struct circle* cirlce, struct circle* secondCircle);
void read_input_triangle(struct pointTriangle* triangle);
void read_input_rectangle(struct rect2df* rectangle);
void read_input_polygon(struct polygon* polygon);
void read_input_linea_plane(struct point2f* point);

void print_cercle_point(const struct circle* circle);
void print_two_cercles(const struct circle* circle, const struct circle* secondCircle);
void print_rectangle(const struct rect2df* rectangle);
void print_triangle(const struct pointTriangle* triangle);
void print_input_linea(const struct point2f* point);
void print_input_polygon(const struct polygon* polygon, int number);

void print_struct(const struct VehicleShopInfo* cars);
void user_input_struct(struct VehicleShopInfo* cars);

void HW_17_02(void) {
	
	read_input_cercle_point(&circle);
	printf("%d", point_on_cercle(&circle));
}
void HW_17_03(void) {
	
	read_input_rectangle(&rectangle);
	int result = point_on_rectangle(&rectangle);
	if (result == 1) {
		printf("The point is in rectangle.");
	}
	else {
		printf("The point is not in rectangle.");
	}
}
void HW_17_04(void) {

	struct circle* secondCircle = { 0 };
	read_input_two_cercles_touch_points(&circle, &secondCircle);
	int result = two_cercles_have_touch_points(&circle, &secondCircle);
	if (result == 1) {
		printf("The Cercles have the same points.");
	}
	else {
		printf("The Cercles have not the same points.");
	}
}
void HW_17_05(void) {
	read_input_triangle(&point);
	printf("%.2f", distance_between_two_points(&point));
}
void HW_17_06(void) {

	read_input_cercle_point(&cercle);
	print_cercle_point(&cercle);
	struct cercle secondCercle = {0};
	read_input_two_cercles_touch_points(&cercle, &secondCercle);
	print_two_cercles(&cercle, &secondCercle);
	read_input_rectangle(&rectangle);
	print_rectangle(&rectangle);
	read_input_triangle(&triangle);
	print_triangle(&triangle);
	read_input_linea_plane(&point);
	print_input_linea(&point);
}
void HW_17_07(void) {
	
	read_input_polygon(&polygon);
	
}

void print_struct_object(const struct VehicleShopInfo* cars) {


}
int point_on_circle(struct circle* circle) {

	float result = sqrt((pow((circle->center.x - circle->point.x),2)) + (pow((circle->center.y - circle->point.y),2)));

	if (result <= circle->radius) {
		return 1;
	}
	else {
		return 0;
	}

}
int two_cercles_have_touch_points(struct circle* circle, struct circle* secondCircle) {
	float result = ((circle->center.x - secondCircle->center.x) * (circle->center.x - secondCircle->center.x))
		+ ((circle->center.y - secondCircle->center.y) * (circle->center.y - secondCircle->center.y));
	float sumRadius = circle->radius + secondCircle->radius;

	if (result <= sumRadius) {

		return 1;
	}
	else {
		return 0;
	}
}
int point_on_rectangle(struct rect2df* rectangle){

	if (rectangle->A.x <= rectangle->point.x <= rectangle->point.x && rectangle->A.y <= rectangle->point.y <= rectangle->point.y) {
		return 1;
	}
	else {
		return 0;
		
	}

	return 0;
}

float Two_Cercels_Have_The_Tuch_Points(struct circle* circle) {

	struct circle* pCircle = &circle;
	float result = sqrt(pow((pCircle->center.x - pCircle->center.x), 2))
		+ sqrt(pow((pCircle->center.y - pCircle->center.y), 2));

	return result;
}
float distance_between_two_points(struct pointTriangle* triangle) {
	float result = sqrt(pow((triangle->A.x - triangle->A.y), 2));
	return result;
}

void read_input_cercle_point(struct circle* circle) {
	printf("Please enter first Center X: ");
	scanf_s(" %f", &circle->center.x);
	printf("Please enter first Center Y: ");
	scanf_s(" %f", &circle->center.y);
	printf("Please enter point A:\n");
	printf("Cordinate X: \n");
	scanf_s(" %f", &circle->point.x);
	printf("Cordinate Y: \n");
	scanf_s(" %f", &circle->point.y);
	printf("Enter radius: \n");
	scanf_s(" %f", &circle->radius);

	

}
void read_input_triangle(struct pointTriangle* triangle) {
	printf("Triangle: \n");
	printf("Please enter first point A: \n");
	printf("X: ");
	scanf_s(" %f", &triangle->A.x);
	printf("Y: ");
	scanf_s(" %f", &triangle->A.y);
	printf("Please enter second point B: \n");
	printf("X: ");
	scanf_s(" %f", &triangle->B.x);
	printf("Y: ");
	scanf_s(" %f", &triangle->B.y);
	printf("Please enter third point C: \n");
	printf("X: ");
	scanf_s(" %f", &triangle->C.x);
	printf("Y: ");
	scanf_s(" %f", &triangle->C.y);

}
void read_input_rectangle(struct rect2df *rectangle) {
	puts("Rectangle:");
	puts("Enter point A:\n");
	printf("X: ");
	scanf_s("%f", &rectangle->A.x);
	printf("Y: ");
	scanf_s("%f", &rectangle->A.y);
	puts("Enter point B:\n");

	printf("X: ");
	scanf_s("%f", &rectangle->B.x);
	printf("Y: ");
	scanf_s("%f", &rectangle->B.y);

	puts("Enter point C: \n");
	printf("X: ");
	scanf_s("%f", &rectangle->D.x);
	printf("Y: ");
	scanf_s("%f", &rectangle->D.y);
	
	puts("Enter point D: ");
	printf("X: ");
	scanf_s("%f", &rectangle->G.x);
	printf("Y: ");
	scanf_s("%f", &rectangle->G.y);
	puts("Enter point M: ");
	printf("X: ");
	scanf_s("%f", &rectangle->point.x);
	printf("Y: ");
	scanf_s("%f", &rectangle->point.y);
}
void read_input_two_cercles_touch_points(struct circle* circle, struct circle* secondCircle) {
	printf("Please enter first Center O: \n");
	printf("X: ");
	scanf_s("%f", &circle->center.x);
	printf("Y: ");
	scanf_s("%f", &circle->center.y);
	printf("Please enter second Center O:\n");
	printf("X: ");
	scanf_s("%f", &secondCircle->center.x);
	printf("Y: ");
	scanf_s("%f", &secondCircle->center.y);
	printf("Please enter first radius: ");
	scanf_s("%f", &circle->radius);
	printf("Please enter second radius: ");
	scanf_s("%f", &secondCircle->radius);
}
void read_input_polygon(struct polygon *polygon) {
	char arr[8] = { 'A','B','C','D','E','F','G','H' };
	int number = 0;
	puts("Polygon\n");
	puts("Enter the number of the points from three to nine: ");
	scanf_s("%d", &number);

	for (int i = 0; i < number; i++)
	{
		printf("Point % c:\nX : ", arr[i]);
		scanf_s("%f", &polygon[i].points[i].x);
		printf("Y : ");
		scanf_s("%f", &polygon[i].points[i].y);
	}
	
	print_input_polygon(polygon, number);
	
}
void read_input_linea_plane(struct point2f* point) {
	printf("Enter two points:\n");
	printf("A X: ");
	scanf_s("%f", &point->x);
	printf("A Y: ");
	scanf_s("%f", &point->y);
	printf("B X: ");
	scanf_s("%f", &point->x);
	printf("B Y: ");
	scanf_s("%f", &point->y);

}
//////////////////////////////////////////////////////////////////////////////////
void print_cercle_point(const struct circle* circle) {

	printf("Cercle point Center:\n");
	printf(" X %.2f\n", circle->center.x);
	printf(" Y %.2f\n", circle->center.y);
	printf("Cercle point A cordinate:\n");
	printf("X: %.2f\n", circle->point.x);
	printf("Y: %.2f", circle->point.y);

}
void print_two_cercles(const struct circle* circle, const struct circle* secondCircle) {

	printf("First Cercle:\n");
	printf("X: ");
	printf("%.2f\n", circle->center.x);
	printf("Y: ");
	printf("%.2f\n", circle->center.y);
	printf("First radius: ");
	printf("%.2f", circle->radius);
	printf("\n");
	printf("Second Cercle:\n");
	printf("X: ");
	printf("%.2f\n", secondCircle->center.x);
	printf("Y: ");
	printf("%.2f\n", secondCircle->center.y);
	printf("Second radius: ");
	printf("%.2f\n", secondCircle->radius);
}
void print_triangle(const struct pointTriangle* triangle) {

	printf("Triangle data: \n");
	printf("Point A: \n X: %.2f\n Y: %.2f\n", triangle->A.x, triangle->A.y);
	printf("Point B: \n X: %.2f\n Y: %.2f\n", triangle->B.x, triangle->B.y);
	printf("Point C: \n X: %.2f\n Y: %.2f\n", triangle->C.x, triangle->C.y);
}
void print_rectangle(const struct rect2df* rectangle) {
	printf("Rectangle:\n");
	printf("Point A\n");
	printf("X: %.2f\n", rectangle->A.x);
	printf("Y: %.2f\n", rectangle->A.y);
	printf("Point B\n");
	printf("X: %.2f\n", rectangle->B.x);
	printf("Y: %.2f\n", rectangle->B.y);
	printf("Point D\n");
	printf("X: %.2f\n", rectangle->D.x);
	printf("Y: %.2f\n", rectangle->D.y);
	printf("Point G\n");
	printf("X: %.2f\n", rectangle->G.x);
	printf("Y: %.2f\n", rectangle->G.y);
	printf("Point Point\n");
	printf("X: %.2f\n", rectangle->point.x);
	printf("Y: %.2f\n", rectangle->point.y);

}
void print_input_linea(const struct point2f* point) {
	printf("Linea: \n");
	printf("Point A:\n");
	printf("X: %.2f\n", point->x);
	printf("Y: %.2f\n", point->y);
}
void print_input_polygon(const struct polygon* polygon, int number) {
	char arr[8] = { 'A','B','C','D','E','F','G','H' };
	printf("Polygon:\n");
	for (int i = 0; i < number; i++)
	{
		printf("Point %c:\n", arr[i]);
		printf("X: %.2f\n", polygon->points[i].x);
		printf("Y: %.2f\n", polygon->points[i].y);
	}
}

void print_struct(const struct VehicleShopInfo* cars) {
	printf("%d", cars->yearOfmanifacture);
	printf("Year of manifacture: %d\n", cars->yearOfmanifacture);
	printf("Brand: %s\n", cars->brandName);
	printf("Model: %s\n", cars->modelName);
	printf("VIN: %s\n", cars->VIN);
	printf("Price: %ld", cars->price);
}
void user_input_struct(struct VehicleShopInfo* cars) {
	puts("enter year of manifacture to your car:");
	scanf_s(" %d", &cars->yearOfmanifacture);
	puts("enter brand name on your car:");
	gets_s(cars->brandName, BRAND_NAME_MAX_SIZE);
	puts("enter model name on your car:");
	gets_s(cars->modelName, MODEL_NAME_MAX_SIZE);
	puts("enter price:");
	scanf_s("%ld", &cars->price);
}