/*
 /*
 * WeightRange.cpp
 *
 *  Created on: 18. jan. 2017
 *      Author: Ejer
 */
#include "WeightRange.h"
#include "BMI.h"
#include "Person.h"

const double UnderWeight = 0;
const double NormalWeight = 18.5;
const double LightOverWeight = 25;
const double FatClass1 = 30;
const double FatClass2 = 35;


WeightRange::WeightRange() {
	//UnderWeight = 0;

	std::cout
			<< "oh hai from the decision maker for the weightrange default constuctor"
			<< std::endl; //<< //UnderWeight;

}

WeightRange::~WeightRange() {
	std::cout << "hei from the WeightRange destructor" << std::endl;

}

double WeightRange::Show(double Index) {

	if (Index <= NormalWeight && Index != UnderWeight) {
		std::cout << "You are underWeight and your BMI is equal to: " << Index << std::endl ;
	}
	else if (Index <= LightOverWeight) {
		std::cout << "You have a normal weight and your BMI is equal to: "
				<< Index << std::endl;
	}
	else if (Index <= FatClass1) {
		std::cout
				<< "You have a BMI which are in the interval overweight, eat more vegetables. your BMI is equal to: "
				<< Index << std::endl ;
	}
	else if (Index <= FatClass2) {
		std::cout << "You have a Very High BMI and should consider a diet. and your BMI is equal to: " << Index << std:: endl;
	}
	else {
		std::cout << "You are obese and you should think about what you eat and maybe a little exercise and your BMI is equal to:"
				<< Index << std::endl;
	}
	return Index;
}

