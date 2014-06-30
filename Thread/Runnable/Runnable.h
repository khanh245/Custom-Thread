/*
 * Runnable.h
 *
 *  Created on: Jun 30, 2014
 *      Author: jakes
 */

#ifndef RUNNABLE_H_
#define RUNNABLE_H_

#include <pthread.h>

class IRunnable
{
public:
	IRunnable() : mThread(0) { }
	virtual ~IRunnable() { }

	virtual void run() = 0;

protected:
	pthread_t mThread;
};

#endif /* RUNNABLE_H_ */
