

#include <iostream>
#include <Windows.h>
#include "addition.h"
int main()
{
    
    int num1,num2;
    std::cout << "Enter the first number : ";
    std::cin >> num1;
    std::cout << std::endl;
    std::cout << "Enter the second number : ";
    std::cin >> num2;
    std::cout << std::endl;
    int operation;
    std::cout << "Select an operation(1 - addition, 2 subtraction, 3 - multiplication, 4 - division, 5 - exponentiation) : ";
    
     //   Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) :
    std::cin >> operation;
    switch (operation){
    case 1: addition(num1, num2); break;
    case 2: subtraction(num1, num2); break;
    case 3: multiplication(num1, num2); break;
    case 4: division(num1, num2); break;
    case 5: exponentiation(num1,num2); break;
    default: std::cout << "There is no such buttonn\n"; exit(1);
    }
}