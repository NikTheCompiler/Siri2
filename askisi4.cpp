#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void PrintAllSets(int *arr1, int i, int n,int *arr2, int k){	

	if(i==n){
	
		int idx = 0;
		while(idx<k){
			cout<<arr2[idx]<<' ';
			++idx;
		}
		cout<<endl;
		return;
	}
	PrintAllSets(arr1,i+1,n,arr2,k);
	arr2[k] = arr1[i];
	PrintAllSets(arr1,i+1,n,arr2,k+1);

}
int main()
{
	int n;
	cout<<"Insert the size of the array:"<<endl;
	cin>>n;
	int arr1[n]={0};
	int arr2[2^n]={0};
	for(int i=0;i<n;i++){
		cout<<"Insert integer for arr["<<i+1<<"]"<<endl;
		cin>>arr1[i];
	}
	PrintAllSets(arr1,0,n,arr2,0);   
}
