/*
 * lr.cpp
 *
 *  Created on: 2018年4月9日
 *      Author: lambdaji
 */

#include "LR.h"
#include "f(x)/lr.h"
double LR::fx(const Instance& inst)
{
	double pred = model_params.bias().wi();
	for(size_t i = 0; i < inst.features_size(); i++)
	{
		const Feature& feat = inst.features(i);
		const FeatWgt& fw = model_params.w(feat.feat_id());
		pred += feat.feat_val() * fw.wi();
	}
	return pred;
}

double LR::dfx(const Instance& inst, double pg)
{
	//bias

	//linear
	return 0;
}
