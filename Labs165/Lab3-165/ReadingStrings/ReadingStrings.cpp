#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
        
        vector<string> words;
        string word;
        
        while(1) {
                cout << "Input a word : ";
                cin >> word;
                if(word == "quit") 
                        break;
                if(word.length() == 1) {
                        cout << endl;
                        cout << "Words Starts with " << word << endl;
                        for(int i=0 ; i<words.size() ; i++) {
                                if(toupper(words[i][0]) == toupper(word[0])) {
                                        cout << "\t" << words[i] << endl;
                                }
                        }
                        cout << endl;
                } else {
                        words.push_back(word);
                }
        }
        
}