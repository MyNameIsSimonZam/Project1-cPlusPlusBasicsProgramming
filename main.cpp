#include <iostream>

void task1();
void task2();
void task3();


int main() {
    int choice;
    std::cout << "Choose a task to run:\n";
    std::cout << "1. Task 1\n";
    std::cout << "2. Task 2\n";
    std::cout << "2. Task 3\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    default:
        std::cout << "Invalid choice. Exiting...\n";
    }
    return 0;
}