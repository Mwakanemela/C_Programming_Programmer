#include <stdio.h>

float area_of_triangle(float width, float height) {

	float area = (width * height) / 2.0;
	return area;
}

int main() {

	printf("Area of triangle 1: (1.3, 8.3): %.2f\n", area_of_triangle(1.3, 8.3));
	return 0;
}
