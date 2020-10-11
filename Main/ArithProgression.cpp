#include "Progression.h"
#include "ArithProgression.h"
#include <iostream>

using namespace std;

ArithProgression::ArithProgression(){
	a[0]=1;
	for(int i=1;i<10;i++){
		a[i]=a[i-1]+1;
	}
}
ArithProgression::ArithProgression(int n) {
	a[0]=n;
	for(int i=1;i<10;i++){
		a[i]=a[i-1]+n;
	}
}
