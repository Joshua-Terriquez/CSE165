#include <iostream>
#include<fstream>
using namespace std;

int main()
{
//declares file
fstream file;
//declaring a variable for characters
char characters;
//declaringing variable count to keep track
int count=0;

//opens file
file.open("words.txt",ios::in);
//while not end of file
while(!file.eof()) 
{
//get each characters in file
file.get(characters);
//if character is whitespace
if(characters == ' ')
//then increment count by 1
count++;
}
//closes file
file.close();
//prints the output.
cout << "\nTotal blank spaces : " << count<< endl;

}