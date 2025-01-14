#include <iostream>

//Задание 2. Теперь вернемся к программе с расчетом стоимости товара.
//Измените ее так, чтобы пользователь мог вводить свои данные.
//Переменные для хранения цены, стоимости доставки и скидки у нас уже есть, 
//вам нужно дописать код, который будет записывать в них введенные пользователем числа.
//Не забудьте добавить подсказки, чтобы было понятно, что нужно вводить.

void task2() {
	int productCost;
	int deliveryCost;
	int discount;

	std::cout << "Enter the goods cost: " << "\n";
	std::cin >> productCost;
	std::cout << "Enter the delivery cost: " << "\n";
	std::cin >> deliveryCost;
	std::cout << "Enter the discount: " << "\n";
	std::cin >> discount;


	int price = productCost + deliveryCost - discount;

	std::cout << "Стоимость товара: " << productCost << "\n";
	std::cout << "Cтоимость доставки: " << deliveryCost << "\n";
	std::cout << "Скидка: " << discount << "\n";
	std::cout << "---------\n";
	std::cout << "Итого: " << price << "\n";
}