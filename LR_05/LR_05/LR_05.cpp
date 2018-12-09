#include "pch.h"
#include <iostream>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double Y;
	int x;
	cout << "Введіть х\nx=";
	cin >> x;
	int sum = 0;
	for (int i = 1; i < 3; i++)
	{
		sum = sum + i * x;
	}
	Y = pow(x, 3) + sin(sum);
	cout << "\nY=" << Y << endl;
	system("pause");
	return 0;
}
