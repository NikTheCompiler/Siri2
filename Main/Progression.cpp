#include "Progression.h"
#include <iostream>

using namespace std;

void Progression::PrintProgression(int o){
	for(int i=0;i<o;i++){
		cout<<a[i];
		if(i<9)
			cout<<",";
	}
	cout<<endl;
}
