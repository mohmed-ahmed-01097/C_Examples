#include <stdio.h>
#include <stdint.h>
#include <conio.h>

float Circle(void);
float Triangle(void);
float Trapezoid(void);
float Square(void);
float Rectangle(void);
int main(void){
	int8_t code;
	float area = -1;
	printf("Area calculation program\n");
	printf("Circle    --> c\n");
	printf("Triangle  --> t\n");
	printf("Trapezoid --> z\n");
	printf("Square    --> s\n");
	printf("Rectangle --> r\n");
	printf("Enter the code here:");
	scanf("%c",&code);

	switch(code){
        case 'C':
        case 'c':
            area = Circle();
            break;
        case 'T':
        case 't':
            area = Triangle();
            break;
        case 'Z':
        case 'z':
            area = Trapezoid();
            break;
        case 'S':
        case 's':
            area = Square();
            break;
        case 'R':
        case 'r':
            area = Rectangle();
            break;
        default:
            printf("Invalid input\n");
            break;
	}
	if(area > 0){
        printf("the Area = %f\n", area);
	}else{
	    printf("Invalid input\n");
	}

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
float Circle(void){
	float r;
	float area;
    printf("Circle Area calculation\n");
    printf("Enter radius(r) value:");
    scanf("%f",&r);
    if( r < 0){
        printf("radius cannot be -ve\n");
        area = -1;
    }else{
        area = 3.14159f * r * r;
    }
    return area;
}
float Triangle(void){
	float b , h;
	float area;
    printf("Triangle Area calculation\n");
    printf("Enter base(b) value:");
    scanf("%f",&b);
    printf("Enter height(h) value:");
    scanf("%f",&h);
    if( (b < 0) || ( h < 0)){
        printf("base or height cannot be -ve\n");
        area = -1;
    }else{
        area = ( b * h)/2;
    }
    return area;
}
float Trapezoid(void){
	float r , b , h, a;
	float area;
    printf("Trapezoid Area calculation\n");
    printf("Enter base1(a) value:");
    scanf("%f",&a);
    printf("Enter base2(b) value:");
    scanf("%f",&b);
    printf("Enter height(h) value:");
    scanf("%f",&h);
    if( ( (a < 0) || ( b < 0) || (h < 0) ) ){
        printf("base or height cannot be -ve\n");
        area = -1;
    }else{
        area = (( a + b)/2) * h;
    }
    return area;
}
float Square(void){
	float a;
	float area;
    printf("Square Area calculation\n");
    printf("Enter side(a) value:");
    scanf("%f",&a);
    if( a < 0){
        printf("side cannot be -ve\n");
        area = -1;
    }else{
        area = a * a;
    }
    return area;
}
float Rectangle(void){
	float b , a;
	float area;
    printf("Rectangle Area calculation\n");
    printf("Enter width(w) value:");
    scanf("%f",&a);
    printf("Enter length(l) value:");
    scanf("%f",&b);
    if( (a < 0)  || (b < 0)){
        printf("width or length cannot be -ve\n");
        area = -1;
    }else{
        area = a * b;
    }
    return area;
}
