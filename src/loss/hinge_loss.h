/*
 * hinge_loss.h
 *
 *  Created on: 2018年4月9日
 *      Author: lambdaji
 */

#ifndef SRC_LOSS_HINGE_LOSS_H_
#define SRC_LOSS_HINGE_LOSS_H_

#include "loss.h"

class HingeLoss: public Loss {
public:
	HingeLoss();
	~HingeLoss() { };

	double loss(double y, double f_x_);
	double dloss(double y, double f_x_);
};

class SquaredHingeLoss: public Loss {
public:
	SquaredHingeLoss();
	~SquaredHingeLoss() { };

	double loss(double y, double f_x_);
	double dloss(double y, double f_x_);
};

class SmoothHingeLoss: public Loss {
public:
	SmoothHingeLoss();
	~SmoothHingeLoss() { };

	double loss(double y, double f_x_);
	double dloss(double y, double f_x_);
};

#endif /* SRC_LOSS_HINGE_LOSS_H_ */
