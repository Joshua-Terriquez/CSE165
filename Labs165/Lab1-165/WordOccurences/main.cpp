#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
	int i = 0;    //variable declarations
	string word;

	ifstream myfile;                   //opens textfile
	myfile.open("words.txt");

  cout<<"Enter a word to count: ";   //asks user for a specific word
	string input;
	cin >> input;

	int count = 0;  // variable used to keeps track of occurences
	char c;
	
	while (myfile >> word) { //while file has strings
		
		if (word == input) {    // if string matches input
			count++;       //adds to count if it's equal
			continue;    // this prevents from it going back and repeating
		}

		i = 0;
		while (word[i])   //this simply turns all character into lower case
  		{
    			c=word[i];
			
    			word[i] = (tolower(c));
    			i++;
			
  		}
		
		for (int i = 0; i < word.length(); i++) {
			if (word[i] == ',' || word[i] == '?' )
				word = word.substr(0, word.length()-1);
		}
		
		if (word == input)
			count++;
		
		
	                      }
	

	
	cout << count << endl;
	myfile.close();
	return 0;
}