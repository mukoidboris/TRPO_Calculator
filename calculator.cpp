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

    std::cout << "Calculator\n";
    std::cout << "Enter first number: ";
    std::cin >> first;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> second;

    if (operation == '+') {
        std::cout << "Result: " << add(first, second) << '\n';
    } else if (operation == '-') {
        std::cout << "Result: " << subtract(first, second) << '\n';
    } else if (operation == '*') {
        std::cout << "Result: " << multiply(first, second) << '\n';
    } else if (operation == '/') {
        if (!divide(first, second, result)) {
            std::cout << "Error: division by zero is not allowed.\n";
            return 1;
        }

        std::cout << "Result: " << result << '\n';
    } else {
        std::cout << "Error: unknown operation.\n";
        return 1;
    }

    return 0;
}
