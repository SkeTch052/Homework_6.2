#include <iostream>
#include <windows.h>
#include <string>
#include "class.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string answer;
    char command;
    int user_count;
    Counter bip_boop;

    while ((answer != "нет") && (answer != "да")) {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> answer;
        if (answer == "да") {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> user_count;
            bip_boop.set_count(user_count);
        }
        else if (answer != "нет" && answer != "да") {
            std::cout << "Некорректный ввод! Повторите попытку." << std::endl;
        }
    }

    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        if (command == '+') {
            bip_boop.set_count(bip_boop.plus());
        }
        else if (command == '-') {
            bip_boop.set_count(bip_boop.minus());
        }
        else if (command == '=') {
            std::cout << bip_boop.get_count() << std::endl;
        }

    } while (command != 'x');
    std::cout << "До свидания!" << std::endl;
    return 0;
}