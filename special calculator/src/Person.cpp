/*
 * Person.cpp
 *
 *  Created on: 17. jan. 2017
 *      Author: Ejer
 */

#include "Person.h"
#include "BMI.h"
#include "WeightRange.h"

Person::Person() {

	std::cout << "hello from the Person constructor" << std::endl;

	age = 0;
	height = 0;
	weight = 0;

	std::cout << "what is your name?" << std::endl;
	std::cin >> name;
	std::cout << "your name is: " << name << std::endl << std::endl;
}

Person::~Person() {
	std::cout << "Person function destroyed" << std::endl;
}

double Person::getAge() {

	std::cout << "What is your age?" << std::endl;
	std::cin >> age;
	std::cout << "Your age is: " << age << std::endl << std::endl;
	return age;
}

double Person::getHeight() {

	std::cout << "what is your height (in meters)?" << std::endl;
	std::cin >> height;
	std::cout << "your height is: " << height << std::endl << std::endl;
	return height;

}

double Person::getWeight() {

	std::cout << "What is your weight (in kg)?" << std::endl;
	std::cin >> weight;
	std::cout << "Your weight is: " << weight << std::endl;

	return weight;
}
