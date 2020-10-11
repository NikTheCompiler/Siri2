#include "Progression.h"
#include "GeomProgression.h"
#include <iostream>

using namespace std;

GeomProgression::GeomProgression(){
	a[10]={};
	a[0]=1;
	for(int i=1;i<10;i++){
		a[i]=a[i-1]*2;
	}
}
GeomProgression::GeomProgression(int m){
	a[10]={};
	a[0]=1;
	for(int i=1;i<10;i++){
		a[i]=a[i-1]*m;
	}
}
