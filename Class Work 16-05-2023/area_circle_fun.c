#include <stdio.h>

float circleArea(float radius){
	return 3.14*radius*radius;
}

int main(){
	float rad;
	printf("Enter radius:");
	scanf("%f",&rad);
	float area = circleArea(rad);
	printf("Area of circle with radius %.3f is: %.3f",rad,area);
}