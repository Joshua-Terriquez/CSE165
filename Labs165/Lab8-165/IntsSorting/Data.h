#ifndef DATA_h
#define DATA_h

#include <iostream>
#include <vector>
using namespace std;
class Data{
private:
       std::vector<int> arr;

public:
       void add(int num){
           arr.push_back(num);
       
       }

       void sort(){
               int j, temp;   
               for (int i = 0; i < arr.size(); i++){
               j = i;   
               while (j > 0 && arr[j] < arr[j-1]){
               temp = arr[j];
               arr[j] = arr[j-1];
               arr[j-1] = temp;
               j--;
               }
               }
       }
  
       void print(){
          
           for(int i=0;i<arr.size();i++)
              std::cout<<arr[i]<<" ";
           std::cout<<'\n';
       }
};
#endif