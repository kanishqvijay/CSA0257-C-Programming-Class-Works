#include <stdio.h>
struct Rectangle {
    float length;
    float breadth;
};

void user_input(struct Rectangle a){
	printf("Enter Length:");
	scanf("%f",&a.length);
	printf("Enter Breadth:");
	scanf("%f",&a.breadth);
	printf("\n");
}

void display_area(struct Rectangle a){
    printf("Area of Rectangle: %f",a.length*a.breadth);
}

void display_perimeter(struct Rectangle a){
    printf("Perimeter of Rectangle: %f",2*(a.length+a.breadth));
}
int main(){
    struct Rectangle r;
    user_input(r);
    display_area(r);
	display_perimeter(r);
    return 0;
}