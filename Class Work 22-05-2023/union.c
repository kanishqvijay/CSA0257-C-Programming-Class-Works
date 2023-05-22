#include <stdio.h>

union myUnion {
    int integer;
    float decimal;
};

int main(){
	union myUnion u;
	u.integer = 5;
	u.decimal = 4.0;
	printf("Values Stored in union:\ninteger = %d\ndecimal = %f",u.integer,u.decimal);
}