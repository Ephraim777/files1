#include "addition.h"
void addition(int a, int b) {
	std::cout << "num1 + num2 = " << a + b;
}
void subtraction(int a, int b) {
	std::cout << "num1 - num2 = " << a - b;
}
void multiplication(int a, int b) {
	std::cout << "num1 * num2 = " << a * b;
}
void division(int a, int b) {
	if (b == 0) {
		b = 1;
	}
	std::cout << "num1 / num2 = " << a / b;
}
void exponentiation(int num1, int num2) {
	int temp = num1;
	if (num2 == 0) {
		num1 = 1;
	}else if(num2 == 1){
		num1 = num1;
	}
	else {
		for (int i = 1; i < num2; i++) {
			num1 *= temp;
		}
		
	}
	std::cout << "num1 to the extent of num2 = " << num1;
}