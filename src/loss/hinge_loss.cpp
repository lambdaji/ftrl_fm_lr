/*
 * hinge_loss.cpp
 *
 *  Created on: 2018年4月9日
 *      Author: lambdaji
 */

#include "cross_entropy_loss.h"

// max(0, 1-y*f(x))
double HingeLoss::loss(double y, double f_x_)
{
	double tmp = y*f_x_;
	if(tmp > 1)
		return 0;
	else
		return 1 - tmp;
}

//-dloss(y,f(x))/df(x)
double HingeLoss::dloss(double y, double f_x_)
{
	double tmp = y*f_x_;
	if(tmp > 1)
		return 0;
	else
		return y;
}

// 1/2 * max(0, 1-y*f(x))^2
double SquaredHingeLoss::loss(double y, double f_x_)
{
	double tmp = y*f_x_;
	if(tmp > 1)
		return 0;
	else
		return 0.5 * (1 - tmp) * (1 - tmp);
}

//-dloss(y,f(x))/df(x)
double SquaredHingeLoss::dloss(double y, double f_x_)
{
	double tmp = y*f_x_;
	if(tmp > 1)
		return 0;
	else
		return y * (1 - tmp);
}

// 分段函数
double SmoothHingeLoss::loss(double y, double f_x_)
{
	double tmp = y*f_x_;
	if(tmp > 1)
		return 0;
	if(tmp < 0)
		return 0.5 - tmp;

	return 0.5 * (1 - tmp) * (1 - tmp);
}

//-dloss(y,f(x))/df(x)
double SmoothHingeLoss::dloss(double y, double f_x_)
{
	double tmp = y*f_x_;
	if(tmp > 1)
		return 0;
	if(tmp < 0)
		return y;

	return y * (1 - tmp);
}
