/*
 * model.h
 *
 *  Created on: 2018年4月11日
 *      Author: lambdaji
 */

#ifndef SRC_MODEL_MODEL_H_
#define SRC_MODEL_MODEL_H_

#include "xy/xy.h"
#include "f(x)/f_x_.h"
#include "loss/loss.h"
#include "optimizer/optimizer.h"
#include "model.pb.h"
#include "util/config.pb.h"

using namespace std;
using namespace lambda_sparse;

class GModel {
public:
	GModel(Config& config);
	~GModel();

	void init();
	void train();
	void predict();
	void load_model();
	void save_model();

	void run();
private:
	DataSet g_data;
	f_x_ g_f_x_;
	Loss g_loss;
	Optimizer g_opt;
	ModelParameters g_params;
	Config g_config;
};



#endif /* SRC_MODEL_MODEL_H_ */
