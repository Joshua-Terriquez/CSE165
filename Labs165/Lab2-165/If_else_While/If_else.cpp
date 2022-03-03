#include <iostream>

using namespace std;

int main() 
{
	int number = 0;
	cin >> number;

	while (number != 0) 
	{
		if (number>0){
        cout<<"Positive &";
    }else {
        cout<<"Negative &";
    }
	
	if (number % 2 == 0)
		cout << " Even" << endl;
	else 
		cout << " Odd" << endl;
	cin >> number;
	}
	return 0;
}