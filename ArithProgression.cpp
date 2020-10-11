#include "Progression.h"
#nclude  "ArithProgression.h"
#include <iostream>

using namespace std;

ArithProgression::ArithProgression(){
	a[10]={};
	for(int i=0;i<10;i++){
		a[i]=a[i]+arith;
	}
}
ArithProgression::ArithProgression(int){
	a[10]={};
	for(int i=0;i<10;i++){
		a[i]=a[i]+n;
	}
}
