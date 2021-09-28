#include <iostream>
#include "Calc.h"
using namespace std;



int main()
{
	double x = 0;
	double y = 0;
	double result = 0;
	char oper = '+';

	cout << "Enter operation in format: a+b or a-b or a*b or a/b" << endl;

	Calc c;
	while (true)
	{
		cin >> x >> oper >> y;
		if ((y == 0) && (oper == '/'))
		{

			cout << "You cant divide by 0!" << endl;
			continue;
		
		}
		else
		{

		result = c.Calculate(x, oper, y);

		}
		cout << "Result is:" << result << endl;
	}


	return 0;
}
