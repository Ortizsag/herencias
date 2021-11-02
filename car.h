// @author: Gorka Ortiz Sagredo <ortizsag@esat-alumni.com>

#ifndef __CAR_H__
#define __CAR_H__ 1

class Vehicle{

public:
	float gas_;
	bool activated_;
	int num_wheels_;

	Vehicle();
	void refuelGas(int g);
	void consumeGas(int g);

};

class MotorBike : public Vehicle{

public:

	bool planted_;
	MotorBike();
	void init(float g, bool p, bool a);
	void plantFoot(bool p, bool a);

};

class Car : public Vehicle {

public:

	int doors_;

	Car();
	void init(float g, int d, bool a);

	void openDoors();
	void closeDoors();
};

class Plane : public Car{
public:

	bool gear_;
	Plane();
	void init(float g, int d, bool a, bool ge);
	void pullGear();
	void lowerGear();
};
#endif
