#include<iostream>
using namespace std;

int main()
{
    double n1,n2;
    double *x,*y;
    
    x=&n1;
    y=&n2;
    
    cout<<"Enter a number: ";
    cin>>n1;
    cout<<"Enter a second number: ";
    cin>>n2;
    
    
    
    cout<<"Multiply: "<<(*x)*(*y)<<endl;
    cout<<"Addition: "<<(*x)+(*y)<<endl;
    cout<<"Subract: "<<(*x)-(*y)<<endl;
    cout<<"Division: "<<(*x)/(*y)<<endl;

    return 0;
}