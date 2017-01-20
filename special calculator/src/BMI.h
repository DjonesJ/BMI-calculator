/*
 * BMI.h
 *
 *  Created on: 17. jan. 2017
 *      Author: Ejer
 */

#ifndef BMI_H_
#define BMI_H_

class BMI {
public:

	double BodyMassIndex;
	BMI();
	~BMI();

	double getCalculate(double weight, double height);

private:

};

#endif /* BMI_H_ */
