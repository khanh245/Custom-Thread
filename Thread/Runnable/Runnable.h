/*
 * Runnable.h
 *
 *  Created on: Jun 30, 2014
 *      Author: jakes
 */

#ifndef RUNNABLE_H_
#define RUNNABLE_H_

class IRunnable
{
public:
	IRunnable() { }
	virtual ~IRunnable() { }

	virtual void run() = 0;
};



#endif /* RUNNABLE_H_ */
