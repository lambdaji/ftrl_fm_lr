/*
 * logloss.h
 *
 *  Created on: 2018年4月8日
 *      Author: lambdaji
 */

#ifndef SRC_LOSS_LOGLOSS_H_
#define SRC_LOSS_LOGLOSS_H_

#include "math.h"
#include "loss.h"

class Logloss: public Loss {
public:
	Logloss();
	~Logloss() { };

	double loss(double y, double f_x_);
	double dloss(double y, double f_x_);
};



#endif /* SRC_LOSS_LOGLOSS_H_ */
