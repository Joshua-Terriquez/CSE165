#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	ifstream myfile;
	myfile.open("code.cpp");
	vector<string> v;
	
	string line;
 	while (getline(myfile, line))     //keep reading from the file, store into string 
		v.push_back(line);	//add string to vector
	
	string s;
	for (int i = 0; i < v.size(); i++) {

		s+= v[i];   //concatenates all the elements in the vector into a single string before printing it out
		
	}
	cout << s << " ";
	
	myfile.close();
	return 0;
}