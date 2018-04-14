/*
 * f_x_.h
 *
 *  Created on: 2018年4月9日
 *      Author: lambdaji
 */

#ifndef SRC_F_X__F_X__H_
#define SRC_F_X__F_X__H_


class f_x_ {
public:
	f_x_();
	virtual ~f_x_() { };

	virtual double fx() = 0;
	virtual double dfx()  = 0;
};


#endif /* SRC_F_X__F_X__H_ */
