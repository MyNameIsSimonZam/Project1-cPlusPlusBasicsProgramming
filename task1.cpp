#include <iostream>

//Задание 1. Оказывается, не все люди умеют вычислять квадрат чисел.
//А ведь это просто необходимо! 
// Буквально каждый день, а то и не один раз, нам нужно 
//вычислить квадрат какого - нибудь числа.

void task1() {
	int a;
	std::cout << "Give me the number for squaring a number: ";
	std::cin >> a;
	std::cout << "Square of a number is: " << a * a << "\n";
}