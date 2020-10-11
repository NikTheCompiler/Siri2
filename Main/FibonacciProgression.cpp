#include "Progression.h"
#include "FibonacciProgression.h"
#include <iostream>

using namespace std;

FibonacciProgression::FibonacciProgression(){
	a[10]={};
	a[0]=fib;
	a[1]=re;
	 for (int i=2;i<10;++i){
        a[i]=a[i-1]+a[i-2];
    }
}
FibonacciProgression::FibonacciProgression(int k,int p){
	a[10]={};
	a[0]=k;
	a[1]=p;
 	for (int i=2;i<10;++i){
        a[i]= a[i-1] + a[i-2];
    }
}
