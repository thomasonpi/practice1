#include <iostream>
using namespace std;

int main()
{
	while(true){
	int input_int, squared_int ;
	cout << " please pick a number to square (0 when done)";
	cin >> input_int;	
	if (input_int == 0) 
		break; 
	else 
		squared_int = input_int * input_int;
	cout << input_int << " squared is: " << squared_int;
	cout << '\n';
	}
	return 0;
}
