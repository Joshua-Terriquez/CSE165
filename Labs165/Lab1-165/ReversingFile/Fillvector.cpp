#include<string>
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()

{

    // Create a vector
    vector<string> v;

    // Open file for reading
    ifstream in("code.cpp");

    // Read file line by line
    string line;

    while (getline(in, line))// getline returns true if read successfully

        // Add the line read to the vector
        v.push_back(line);


    // Display the lines after adding line numbers
    for (int i=0; i<v.size(); i++)

        cout << i << ": " << v[i] << endl;

    cout << endl << endl;

    // Display the content of the file read after reversing the line numbers
    for (int i=0; i<v.size(); i++)

        cout << v.size()-i-1 << ": " << v[i] << endl;

}