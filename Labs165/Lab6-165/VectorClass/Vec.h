#ifndef VEC_H
#define VEC_H
#include <iostream>
using namespace std;

	class Vec {

		public:
			float x,y; //2 floats
			static Vec null; //intiated static vec obj. null
			Vec() {   // Default constructor
				x=0;
				y=0;
			}	
			Vec(float a, float b) { //Constructor from two coord's
				x=a;
				y=b;
			}
			void add(Vec n) {     //add method 
				x = x + n.x;
				y = y + n.y;
			}
	
			void print() {
				cout << "(" << x << ", " << y << ")" << endl;
			}


	};
	Vec Vec::null = Vec(0,0);
                //this makes the  null obj represents (0,0)
#endif