/*
 * cross_entropy_loss.cpp
 *
 *  Created on: 2018年4月8日
 *      Author: lambdaji
 */

#include "cross_entropy_loss.h"

//y⋅logf(x) + (1-y)⋅log(1-f(x))
double CrossEntropyLoss::loss(double y, double f_x_)
{
	return y*log(f_x_) + (1-y)*log(1 - f_x_);
}

//-dloss(y,f(x))/df(x)
double CrossEntropyLoss::dloss(double y, double f_x_)
{
	return f_x_ - y;
}


