#ifndef DYN_H
#define DYN_H



#include <iostream>

using namespace std;
#include <vector>

template <class T>

		
	class DynArray {
		
		
		public:
			vector<T> vec;
			void add(T& x) {
				vec.push_back(x);
				
			}

			T operator [](int t){
				return vec[t];
			}

			int size() {
				return vec.size();
			}
	};




#endif