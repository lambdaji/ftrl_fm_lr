/*
 * logloss.cpp
 *
 *  Created on: 2018年4月8日
 *      Author: lambdaji
 */

#include "logloss.h"

//log(1+exp(-y*f(x))
double Logloss::loss(double y, double f_x_)
{
	return log1p(exp(-y*f_x_));
}

//-dloss(y,f(x))/df(x)
double Logloss::dloss(double y, double f_x_)
{
	return y/log1p(exp(y*f_x_));
}
