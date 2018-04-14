/*
 * loss.h
 *
 *  Created on: 2018年4月8日
 *      Author: lambdaji
 */

#ifndef SRC_LOSS_LOSS_H_
#define SRC_LOSS_LOSS_H_

class Loss {
public:
	Loss();
	virtual ~Loss() { };

	//loss(y, f(x))
	virtual double loss(double y, double f_x_) = 0;

	//-dloss(y,f(x))/df(x)
	virtual double dloss(double y, double f_x_) = 0;
};



#endif /* SRC_LOSS_LOSS_H_ */
