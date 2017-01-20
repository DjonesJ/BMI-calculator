//============================================================================
// Name        : Getters.cpp
// Author      : Jonas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Person.h"
#include "BMI.h"
#include "WeightRange.h"
#include <iostream>

int main() {
	Person person;
	BMI bmi;
	WeightRange weightRange;

	person.getAge();


	double testHeight = person.getHeight();
	double testWeight = person.getWeight();

	// puts it into this function in BMI CPP -> double BMI::Calculate(double Weight, double height)

	double testIndex = bmi.getCalculate(testWeight, testHeight);

	weightRange.Show(testIndex);

	return 0;
}
