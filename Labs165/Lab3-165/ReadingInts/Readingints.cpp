#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
   //declare vector variable as type integer
   vector<int> vec;
   //declare x variable to take input and sum to add the vector elements
   int x, sum = 0;

   //"Input number, if number is positive programs adds to vector, if negetive it removes the vector element with same absolute value " << endl;
   cout << "Input: \n";
   do
   {
       cin >> x;
       //if x is greater than 0 , add that element to vecctor
       if (x > 0)
       {
           vec.push_back(x);
       }
       //if x is less than 0 , remove the element which is absolute value of the input x
       if (x < 0)
       {
           bool found = 0;
          
           for ( int i = 0; i < vec.size(); i++)
           {
               //get the index of the absolute value of the element present in vector, then erase it from the vector
               if (vec[i] == abs(x))
               {
                   vec.erase(vec.begin() + i);
                   //loop from 0 index to search from gebinning
                   i = -1;
                   found = 1;
               }
           }
           if (!found)
               cout << "element with absulute value of the input not found!!" << endl;
       }

   } while (x != 0);

   //add up the elements in the vector
   for (int i = 0; i < vec.size(); i++)
   {
       sum += vec[i];
   }
   //output the number of entries that remained in the vector and the sum of all entries
   cout << "output: \n";
   cout << vec.size()<<" "<<sum << endl;

}