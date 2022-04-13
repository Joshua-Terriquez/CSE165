//#ifndef CIRCLE_H
//#define CIRCLE_H
#include <math.h>
	class Circle{
	
		private:
			double x,y,r; // three private variables of type double as asked...
		public:
			double area; // public variable
			Circle() {    // default constructor w/ no arguments
				x = 0;
				y = 0;       //-----x&y cartesian positions 
				r = 1;
				area = 	M_PI * r * r;
							
			}
			Circle(double xx, double yy, double rr) {
				x = xx;
				y = yy;          // takes 3 arguments
				r = rr;
				area = 	M_PI * r * r;	
			}	
			void setX(double xx){
				x = xx;		
			}
			void setY(double yy){
				y = yy;		
			}
			void setR(double rr){
				r = rr;	
				area = M_PI * r * r;	
			}
			double getX(){
				return x;		
			}
			double getY(){
				return y;		
			}
			double getR(){
				return r;
						
			}
	
	
	};



//#endif