// @author: Gorka Ortiz Sagredo <ortizsag@esat-alumni.com>

#include "car.h"


Vehicle::Vehicle(){
	gas_ = 3.0f;
	activated_ = false;
}
void Vehicle::refuelGas(int g){
	gas_ = gas_ + g;
}

void Vehicle::consumeGas(int g){
	gas_ = gas_ - g;
}


MotorBike:MotorBike(){
	num_wheels_ = 2;
	planted_ = true;
}
void MotorBike:init(float g, bool p, bool a){
	gas_ = g;
	planted_ = b;
	activated_ = a;
}
void MotorBike:plantFoot(bool p, bool a){
	if(p){
		p = false;
		a = true
	}
	else{
		p = true;
		a = false;
	}
}


Car::Car(){
	num_wheels_=4;
	doors_=4;
}
void Car::init(float g, int d, bool a){
	doors_ = d;
	gas_ = g;
	activated_ = a;
}
void Car::openDoors(){
	 activated_ = true;
}
void Car::closeDoors(){
	 activated_ = false;
}


Plane::Plane(){
	gear = true;
}
void Plane::init(float g, int d, bool a, bool ge){
	doors_ = d;
	gas_ = g;
	activated_ = a;
	gear_ = ge;
}
void Plane::pullGear(){
	 activated_ = true;
	 gear_ = false;
}
void Plane::lowerGear(){
	 activated_ = false;
	 gear_ = true;
}
