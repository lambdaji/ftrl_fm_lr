/*
 * cross_entropy_loss.h
 *
 *  Created on: 2018.4.8
 *      Author: lambdaji
 */

#ifndef SRC_LOSS_CROSS_ENTROPY_LOSS_H_
#define SRC_LOSS_CROSS_ENTROPY_LOSS_H_

#include "loss.h"

class CrossEntropyLoss: public Loss {
public:
	CrossEntropyLoss();
	~CrossEntropyLoss() { };

	double loss(double y, double f_x_);
	double dloss(double y, double f_x_);
};



#endif /* SRC_LOSS_CROSS_ENTROPY_LOSS_H_ */
