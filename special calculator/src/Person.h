/*
 * Person.h
 *
 *  Created on: 17. jan. 2017
 *      Author: Ejer
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string.h>
#include <string>
#include <iomanip>
#include <sstream>

class Person {

private:
	std::string name;

public:

	double age;
	double height;
	double weight;

	Person();
	~Person();

	double getAge();
	double getHeight();
	double getWeight();
};

#endif /* PERSON_H_ */
