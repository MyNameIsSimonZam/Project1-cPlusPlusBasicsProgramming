#include <iostream>

//Задание 2
//Напишите программу, которая требует ввести логин и пароль, 
//а после выводит сообщение об успешной регистрации.
//Пример работы программы :
//```
//Введите логин : [введенный логин]
//Введите пароль : [введенный пароль]
//[введенный логин] , вы успешно зашли!
//```

void task4() {
	std::string login;
	std::string password;
	std::cout << "Please, enter your login: ";
	std::cin >> login;
	std::cout << "\n";
	std::cout << "Please, enter your password: ";
	std::cin >> password;
	std::cout << "\n";
	std::cout << login << ", вы успешно зашли!" << "\n";
}