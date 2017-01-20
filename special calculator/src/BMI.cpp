#include "BMI.h"
#include "Person.h"
#include "WeightRange.h"
BMI::BMI() {

	BodyMassIndex = 0;

	std::cout << "hello from the BMI constructor :-)" << std::endl;

}

BMI::~BMI() {

	std::cout << "BMI function destroyed" << std::endl;

}

double BMI::getCalculate(double weight, double height) {

	std::cout << "this is the formula: BMI = (weight/height^2)" << std::endl;

	BodyMassIndex = weight / (height * height);

	std::cout << "your BMI is: " << BodyMassIndex << std::endl;
	return BodyMassIndex;

}
