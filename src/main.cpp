/*
 * main.cpp
 *
 *  Created on: Jun 29, 2014
 *      Author: khanhn
 *
 *  Purpose: Custom Thread in C++ Driver
 */

#include <iostream>

#include "Thread.h"
#include "Runnable.h"

class testRunnable : public IRunnable
{
public:
	testRunnable() { }

	void run()
	{
		std::cout << "This is run from thread." << std::endl;
	}
};

void test()
{
	Thread* t = new Thread(new testRunnable());
	t->start();
}

int main()
{
	std::cout << "This is a driver for custom thread. This is just a POC and will be used in Kronos." << std::endl;
	test();

	return 0;
}
