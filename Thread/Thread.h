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
	Thread();
	Thread(const IRunnable& runnable);
	~Thread();

	void run();
	void start();

protected:

private:

};



#endif /* THREAD_H_ */
