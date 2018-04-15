/*
 * optimizer.h
 *
 *  Created on: 2018年4月11日
 *      Author: lambdaji
 */

#ifndef SRC_OPTIMIZER_OPTIMIZER_H_
#define SRC_OPTIMIZER_OPTIMIZER_H_

class Optimizer {
public:
	Optimizer();
	virtual ~Optimizer() { };

	virtual double fx() = 0;
	virtual double dfx()  = 0;
};



#endif /* SRC_OPTIMIZER_OPTIMIZER_H_ */
