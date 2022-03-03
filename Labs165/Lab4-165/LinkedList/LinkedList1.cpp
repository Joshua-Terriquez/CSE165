     
#include<iostream>
#include<fstream>
#include "LinkedList.h"

using namespace std;

int main(){
        //opening input.txt in read mode
        ifstream infile("input.txt");
        //ensuring that file is opened correctly
        if(!infile){
                cout<<"input.txt file is not found!"<<endl;
                return 0;
        }
        //creating and initializing a list
        LinkedList list;
        list.initialize();
        float input;
        //looping as long as input is read from the file successfully
        while(infile>>input){
                //creating a new dynamic float pointer
                float* f=new float(input);
                //adding to list
                list.add(f);
        }
        //now printing all elements of the list
        for(int i=0;i<list.size;i++){
                float* f=(float*)(list.get(i));
                cout<<*f<<" ";
        }
        cout<<endl;
        
        //we need to deallocate all memory.
        //first, we need to deallocate memory occuppied by each float pointer
        //which we defined here. it is important that it should be deallocated here only
        for(int i=0;i<list.size;i++){
                delete (float*)list.get(i);
                cout<< "deallocating pointer memory"<<endl;
        }
        //now cleaning up list by deallocating nodes. it will be done by LinkeList
        list.cleanup();
        cout<<"node memory deallocated"<<endl;
        return 0;
}