#ifndef MONITOR_H
#define MONITOR_H

#include <iostream>
using namespace std;

class Monitor{

    public:
            static int count;

            int incident(){
                count++;
            }
            void print(){
                cout<<count<< " incidents"<<endl;
            }




};

#endif