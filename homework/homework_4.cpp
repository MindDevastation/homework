#include "homework_4.h"
#include <iostream>
#include <stdlib.h>

void h4_get() {
	int index;
	do {

		std::cout << "================================" << std::endl;
		std::cout << "========= Homework_4 ===========" << std::endl;
		std::cout << "||Enter Index 1 for task 1:   ||" << std::endl;
		std::cout << "||Enter Index 2 for task 2:   ||" << std::endl;
		std::cout << "||Enter Index 3 for task 3:   ||" << std::endl;
		std::cout << "||Enter Index 4 for task 4:   ||" << std::endl;
		std::cout << "||Enter Index 5 for task 5:   ||" << std::endl;
		std::cout << "||Enter Index 6 for task 6:   ||" << std::endl;
		std::cout << "||Enter Index 7 for task 7:   ||" << std::endl;
		std::cout << "||Enter Index 8 for task 8:   ||" << std::endl;
		std::cout << "||Enter Index 9 for task 9:   ||" << std::endl;
		std::cout << "||Enter Index 10 for task 10: ||" << std::endl;
		std::cout << "||Enter Index 0 to exit:      ||" << std::endl;
		std::cout << "================================" << std::endl;
		std::cout << "Enter your Index: ";
		std::cin >> index;
		switch (index)
		{
		case(1): {
			h4_task1();
			break;
		}
		case(2): {
			h4_task2();
			break;
		}
		case(3): {
			h4_task3();
			break;
		}
		case(4): {
			h4_task4();
			break;
		}
		case(5): {
			h4_task5();
			break;
		}
		case(6): {
			h4_task6();
			break;
		}
		case(7): {
			h4_task7();
			break;
		}
		case(8): {
			h4_task8();
			break;
		}
		case(9): {
			h4_task9();
			break;
		}
		case(10): {
			h4_task10();
			break;
		}
		case(0): {
			break;
		}
		default:
			std::cout << "Wrong Index" << std::endl;
			break;
		}
		system("pause");
		system("cls");
	} while (index != 0);

}

void h4_task1() {
	system("cls");
	//-------First----------
	std::cout << "First solution: " << std::endl;
	int a = 0, b = 0, c = 0;
	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "Enter first second: ";
	std::cin >> b;
	std::cout << "Enter first third: ";
	std::cin >> c;
	float res = 0;
	res = (float) (a + b + c) / 3;
	std::cout << "Result :" << res << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << " " << std::endl;

	//-------Second---------

	std::cout << "Second solution: " << std::endl;
	int sum = 0;
	int num;
	float average = 0;
	for (auto i = 0; i < 3; i++) {
		std::cout << "Enter number " << i+1 << ": ";
		std::cin >> num;
		sum += num;
		std::cout << "Sum: " << sum << std::endl;
	}
	average = (float) sum / 3;
	std::cout << "Result :" << average << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << " " << std::endl;

}

void h4_task2() {
	system("cls");
	int number = 0, a, b;
	std::cout << "Enter number: ";
	std::cin >> number;
	if (number >= 10 && number <= 99) {
		a = number / 10;
		b = number % 10;
		std::cout << a << " and " << b << std::endl;
		std::cout << a << " + " << b << " = " << a + b << std::endl;
	}
	else {
		std::cout << "Wrong number!" << std::endl;
	}
}

void h4_task3() {
	system("cls");
	int first = 0, second = 0, third = 0;
	std::cout << "Enter number one: ";
	std::cin >> first;
	std::cout << "Enter number two: ";
	std::cin >> second;
	std::cout << "Enter number three: ";
	std::cin >> third;
	std::cout << "Numbers: " << first << " " << second << " " << third << std::endl;
	if (first < second && second < third) {
		std::cout << "true" << std::endl;
	}
	else {
		std::cout << "false" << std::endl;
	}

}

void h4_task4() {
	system("cls");
	int first = 0, second = 0, third = 0;
	std::cout << "Enter number one: ";
	std::cin >> first;
	std::cout << "Enter number two: ";
	std::cin >> second;
	std::cout << "Enter number three: ";
	std::cin >> third;
	std::cout << "Numbers: " << first << " " << second << " " << third << std::endl;
	if (first > 0 || second > 0 || third > 0) {
		if (first % 2 == 0 || second % 2 == 0 || third % 2 == 0) {
			std::cout << "true" << std::endl;
		}
		else {
			std::cout << "false" << std::endl;
		}
	}
	else {
		std::cout << "false" << std::endl;
	}
}

void h4_task5() {
	system("cls");
	int first = 0, second = 0;
	std::cout << "Enter number one: ";
	std::cin >> first;
	std::cout << "Enter number two: ";
	std::cin >> second;
	if (first > second) {
		std::cout << first << " > " << second << std::endl;
	}
	else if (first < second) {
		std::cout << first << " < " << second << std::endl;
	}
	else {
		std::cout << first << " = " << second << std::endl;
	}
}

void h4_task6() {
	system("cls");
	int number = 0;
	std::cout << "Enter number: ";
	std::cin >> number;
	if (number >= 10 && number <= 99) {
		if (number / 10 == number % 10) {
			std::cout << "true" << std::endl;
		}
		else {
			std::cout << "false" << std::endl;
		}
	}
	else {
		std::cout << "Wrong number!" << std::endl;
	}
}

void h4_task7() {
	system("cls");
	int number = 0;
	std::cout << "Enter number: ";
	std::cin >> number;
	if (number >= 100 && number <= 999) {
		if (number / 100 == number % 10) {
			std::cout << "true" << std::endl;
		}
		else {
			std::cout << "false" << std::endl;
		}
	}
	else {
		std::cout << "Wrong number!" << std::endl;
	}
}

void h4_task8() {
	system("cls");
	float first = 0, second = 0;
	std::cout << "Enter first side of rectangle: ";
	std::cin >> first;
	std::cout << "Enter second side of rectangle: ";
	std::cin >> second;
	if (first == second) {
		std::cout << "Its a square!" << std::endl;
	}
	else {
		std::cout << "Its only a rectangle!" << std::endl;
	}
}

void h4_task9() {
	system("cls");
	char symb;
	std::cout << "Enter symbol: ";
	std::cin >> symb;
	if ((int)symb >= 48 && (int)symb <= 57) {
		std::cout << "Symbol " << symb << " is a number! " << std::endl;
	}
	else {
		std::cout << "Symbol " << symb << " is NOT a number! " << std::endl;
	}
}

void h4_task10() {
	system("cls");
	int first = 0, second = 0, temp;
	std::cout << "Enter number one: ";
	std::cin >> first;
	std::cout << "Enter number two: ";
	std::cin >> second;
	if (first < second) {
		temp = first;
		first = second;
		second = temp;
	}
	std::cout << "Numbers: " << first << " and " << second << std::endl;

}