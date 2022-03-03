#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

        // define a vector or vector of string of size 10
       vector<vector<string>> V(10);

        // define a string variable to take user input
        string str;
 
        // take a user input
        cout<<"Enter the input: ";
        cin>>str;

        // check if user enter quit
        while(str!="quit")
        {
                // calculate the length of the string
                // inpu by the user
                int len = str.size();
                
                // if length is not equal to 0
                if(len!=0)
                {
                    // put this string at the vector of that len-1 index
                    V[len-1].push_back(str);
                }

                //take user input again
                cout<<"Enter the input: ";
                cin>>str;
        }
  
        //output our result
        for(int i=0;i<10;i++)
        {
            //check for non-empty string at that length
            if(V[i].size() !=0){

                //count number of letters in 
                int letter_count = 0;

                //count number of strings at that index
                int string_count = 0;
                for(int j =0;j<V[i].size();j++){

                    // count number of string 
                    string_count++;

                    //count number of letters at Vector[i]
                    letter_count +=V[i][j].size();  
                }

                // print result
                cout<<letter_count<<" "<<string_count<<endl;
            }
        }
}