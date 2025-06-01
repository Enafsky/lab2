#include <iostream>  // подключаем библиотеку для ввода/вывода

int main() {
    std::string name;
    std::cout << "Enter your name: "; 
    std::cin >> name;
    std::cout << "Hello, world from " << name << "!";  // выводим приветствие
    return 0;
}
