#include <iostream>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

bool divide(double a, double b, double result){
    if (b == 0){
        return false;
    }
    result = a / b;
    return true;
}


int main() {
    double first = 0.0;
    double second = 0.0;
    double result = 0.0;
    char operation = '\0';

    std::cout << "Калькулятор\n";
    std::cout << "Введите первое число: ";
    std::cin >> first;

    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Введите второе число: ";
    std::cin >> second;

    if (operation == '+') {
        std::cout << "Результат: " << add(first, second) << '\n';
        std::cout << "Успех!" << endl;
    } else if (operation == '-') {
        std::cout << "Результат: " << subtract(first, second) << '\n';
        std::cout << "Успех!" << endl;
    } else if (operation == '*') {
        std::cout << "Результат: " << multiply(first, second) << '\n';
        std::cout << "Успех!" << endl;
    } else if (operation == '/') {
        if (!divide(first, second, result)) {
            std::cout << "Ошибка: деление на ноль\n";
            return 1;
        }

        std::cout << "Результат: " << result << '\n';
        std::cout << "Успех!" << endl;
    } else {
        std::cout << "Ошибка: неизвестная операция\n";
        return 1;
    }

    return 0;
}
