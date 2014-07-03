/*
 * Thread.h
 *
 *  Created on: Jun 29, 2014
 *      Author: khanhn
 */

#ifndef THREAD_H_
#define THREAD_H_

#include "Runnable.h"

class Thread	:	public IRunnable
{
public:
	Thread(IRunnable* const runnable);
	~Thread();

	// TODO: Implement a start/stop thread with pthread
	void start();

protected:
	Thread();

private:
	Thread(const Thread& t);
	Thread& operator= (const Thread& t);

	void run() { }
	IRunnable* mRunnable;
};

#endif /* THREAD_H_ */
