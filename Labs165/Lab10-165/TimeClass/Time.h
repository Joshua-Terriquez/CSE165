#include <iostream>
using namespace std;

class Time
{
private:
   // private data members
   int hours;
   int minutes;
   int seconds;
  
public:
   // Default constructor
   Time()
   {
       hours = 0;
       minutes = 0;
       seconds = 0;
   }
  
   // Parameterized constructor
   Time(int h, int m, int s)
   {
       hours = h;
       minutes = m;
       seconds = s;
   }
  
   // Overloaded add(+) Operator
   Time operator+(Time t)
   {
       Time temp;
      
       // Adding seconds
       temp.seconds = seconds + t.seconds;
       if(temp.seconds >= 60)
       {    temp.minutes += 1;
           temp.seconds -= 60;
       }
      
       // Adding minutes
       temp.minutes = temp.minutes + minutes + t.minutes;
       if(temp.minutes >= 60)
       {     temp.hours += 1;
          temp.minutes -= 60;
       }
      
       // adding hours
       temp.hours = temp.hours + hours + t.hours;
      
       // return object
       return temp;
   }
  
   // Display time
   void print()
   {
       cout << hours << " hours, ";
       cout << minutes << " minutes, ";
       cout << seconds << " seconds" << endl;
   }
      
};