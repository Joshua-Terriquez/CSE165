#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include<iostream>

int main(){

   char a;
   int n;
   while (n != -2){
      cin >> a >> n;
      if ( n == -1)
         cout << "\n";
      else {
         for (int i = 0; i<n; i++)
             cout << a;
      }
   }
}