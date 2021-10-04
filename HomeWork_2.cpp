#include <iostream>

int main()
{
	short int a = 15;
	int b = 365;
	long long c = 14615358;
	char d = 'x';
	bool e = true;
	float f = 1.41f;
	double g = 18.698;



	//char Sign_X = 'X';
	//char Sign_O = 'O';

	enum Game{Sign_X, Sign_O};

	// согласно таблице ASCII символов пробел имеет код 32 
	char playing_field[3][3] = {
		{space,space,space},
		{space,space,space},
		{space,space,space}
	};
	std::cout << playing_field << endl;
	
}