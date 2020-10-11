#include "Progression.h"

#ifndef FIBONACCIPROGRESSION_H_
#define FIBONACCIPROGRESSION_H_

class FibonacciProgression: public Progression{
	public:
			FibonacciProgression(int k,int p);
			FibonacciProgression();
			int fib=0,re=1;
};
#endif
