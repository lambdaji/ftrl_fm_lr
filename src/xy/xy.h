/*
 * xy.h
 *
 *  Created on: 2018年4月15日
 *      Author: JZY
 */

#ifndef SRC_XY_XY_H_
#define SRC_XY_XY_H_

#include "xy/xysample.pb.h"

using namespace lambda_sparse;

class DataSet
{
	DataSet();
	~DataSet();

	xySamples tr_;
	xySamples va_;
	xySamples te_;
};

#endif /* SRC_XY_XY_H_ */
