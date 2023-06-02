#include <stdio.h>
#include <stdint.h>
#include <conio.h>

typedef struct carModel{
	uint32_t carNumber;
	uint8_t carSpeed;
	uint32_t carPrice;
	float carWeight;
}CarModel_t;

int main(void){

	printf("Sizeof of struct carModel is %u\n",sizeof(struct carModel));

	CarModel_t carHonda ={2024, 250, 500000, 349.75};//C89
	CarModel_t carBMW ={.carNumber = 2030, .carSpeed = 250, .carPrice = 500000, .carWeight = 495.25};//C99
	printf("Honda %8u price = %lu $ with %u speed and %0.2f Kg Weight\n",
        carHonda.carNumber,carHonda.carPrice, carHonda.carSpeed, carHonda.carWeight);
	printf("BMW   %8u price = %lu $ with %u speed and %0.2f Kg Weight\n",
        carBMW.carNumber, carBMW.carPrice, carBMW.carSpeed, carBMW.carWeight);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
