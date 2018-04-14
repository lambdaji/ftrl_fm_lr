/*
 * lr.h
 *
 *  Created on: 2018年4月9日
 *      Author: lambdaji
 */

#ifndef SRC_F_X__LR_H_
#define SRC_F_X__LR_H_

#include "f_x_.h"
#include "feat/instance.pb.h"
#include "util/config.pb.h"

using namespace lambda_sparse;
class LR : public f_x_ {
public:
	LR();
	~LR();

	double fx(const Instance& inst) = 0;
	double dfx(const Instance& inst, double pg)  = 0;

	ModelParameters model_params;
	Config config;
};


#endif /* SRC_F_X__LR_H_ */
