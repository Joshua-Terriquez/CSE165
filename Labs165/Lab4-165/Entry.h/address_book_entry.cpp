#include <iostream>
#include "Entry.h"
int main(int argc, const char * argv[])
{
    string name, lastname, email;
    
    cout<<"Enter your first name: ";
    cin >> name;
    cout<<"Enter your last name: ";
    cin >> lastname;
    cout<< "Enter your email: ";
    cin >> email;
    cout<<""<<endl;
    Entry myEntry;
    
    myEntry.setName(name);
    myEntry.setLastname(lastname);
    myEntry.setEmail(email);
    
    myEntry.print();
    
    return 0;
}