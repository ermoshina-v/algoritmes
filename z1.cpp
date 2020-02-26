#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "rus");
	float a,z1,z2;
	std::cout << "Введите а \n";
	std::cin >> a;

	z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * sqrt(sin(2 * a)));
	z2 = (tan(3 * a));
	std::cout << "Значение функции z1 = " << z1 << " \n " << "Значение функции z2 = " << z2 << " \n ";
	system("pause");
}
