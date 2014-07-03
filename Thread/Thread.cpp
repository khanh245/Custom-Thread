/*
 * Thread.cpp
 *
 *  Created on: Jun 29, 2014
 *      Author: khanhn
 */

#include <stdexcept>

#include "Thread.h"

Thread::Thread()	:	mRunnable(0)
{ }

Thread::Thread(const IRunnable* runnable)	:
		mRunnable(const_cast<IRunnable*>(runnable))
{ }

Thread::~Thread()
{
	if (mRunnable) delete mRunnable;
	mRunnable = NULL;
}

void Thread::start()
{
	mRunnable->run();
}
