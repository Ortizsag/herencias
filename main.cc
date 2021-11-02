// @author: Gorka Ortiz Sagredo <ortizsag@esat-alumni.com>


#include <stdio.h>

#include "car.h"
//const int kNumCars = 10;


int main(int argc, char** argv) {



Car* car_1 = new Car(12, 35);
Car* car_2 = new Car(11, 17);
Car* car_3 = new Car(16, 19);

delete car_1;
delete car_2;
delete car_3;


	/*
	Car cars[kNumCars];

	for(int i=0;i<kNumCars;i++){
		if(i<2){
			cars[i].init(3, 10);
		}
		else{
			cars[i].init();
		}
	}
	*/

	for(int i=0;i<3;i++){
		printf("Gas= %f \n Door= %d \n Open= %d", cars[i].gas_, cars[i].doors_, cars[i].openDoors);
	}


	return 0;
}
