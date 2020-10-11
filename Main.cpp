#include <iostream>
#include <iomanip>
#include <cmath>
#include "Progression.h"
#include "ArithProgression.h"
#include "GeomProgression.h"
#include "FibonacciProgression.h"

using namespace std;
int main() {
	Progression* prog;

 	cout << "Arithmetic progression with default increment 1:\n";
 	prog = new ArithProgression();

	 prog->printProgression(10);
	 cout << "Arithmetic progression with increment 5:\n";
 
	 prog = new ArithProgression(5);
	 prog->printProgression(10);
	 cout << "Geometric progression with default base:\n";
	 prog = new GeomProgression();
	 prog->printProgression(10);
	 cout << "Geometric progression with base 3:\n";
	 prog = new GeomProgression(3);
	 prog->printProgression(10);

	 cout << "Fibonacci progression with default start values:\n";
	 prog = new FibonacciProgression();
	 prog->printProgression(10);
 	cout << "Fibonacci progression with start values 4 and 6:\n";
 	prog = new FibonacciProgression(4, 6);
 	prog->printProgression(10);
 	
 	
 	return EXIT_SUCCESS; 
}

