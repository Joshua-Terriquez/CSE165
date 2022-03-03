#include <iostream>
#include "Stash.h"
using namespace std;

int main() {
	double input;
	double* x;
	Stash stash;
	int size;
    cout<< "input size: ";
	cin >> size;
	stash.initialize(sizeof(double));
	for (int i=0; i < size; i++) {

		cin >> input;
		stash.add(&input);
	}
    cout<<""<<endl;
	for (int i = 0; i < stash.count(); i++) {
        
		 cout << * ((double*)stash.fetch(i)) << endl; 
	}
	stash.cleanup();
	return 0;
}