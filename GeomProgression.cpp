#include "Progression.h"
#include <iostream>

using namespace std;

GeomProgression::GeomProgression(){
	a[10]={};
	a[0]=geo;
	for(int i=1;i<10;i++){
		a[i]=a[i-1]/2;
	}

}
GeomProgression::GeomProgression(int ){
	a[10]={};
	a[0]=m;
	for(int i=1;i<10;i++){
		a[i]=a[i-1]/2;
	}
}
