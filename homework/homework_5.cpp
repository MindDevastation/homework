#include "homework_5.h"
#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include <cmath>

void h5_get() {
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
			h5_task1();
			break;
		}
		case(2): {
			h5_task2();
			break;
		}
		case(3): {
			h5_task3();
			break;
		}
		case(4): {
			h5_task4();
			break;
		}
		case(5): {
			h5_task5();
			break;
		}
		case(6): {
			h5_task6();
			break;
		}
		case(7): {
			h5_task7();
			break;
		}
		case(8): {
			h5_task8();
			break;
		}
		case(9): {
			h5_task9();
			break;
		}
		case(10): {
			h5_task10();
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
void h5_task1() {
	system("cls");
	float temperature = 0.0;
	std::cout << "Enter your temperature: " << std::endl;
	std::cin >> temperature;
	if (temperature < 33) std::cout << "Too low temperature. Youre dead" << std::endl;
	else if (temperature >= 33 && temperature < 36) std::cout << "Low temperature. Youre suffering from prostration" << std::endl;
	else if (temperature >= 36 && temperature < 37) std::cout << "Normal temperature. Youre totally healthy" << std::endl;
	else if (temperature >= 37 && temperature < 40) std::cout << "Hight temperature. Youre suffering from fever" << std::endl;
	else std::cout << "Too high temperature. Youre dead" << std::endl;

}
void h5_task2() {
	system("cls");
	int hr = 0, min = 0, sec = 0;
	std::cout << "Enter time(hr min sec): ";
	std::cin >> hr >> min >> sec;
	if (hr >= 0 && hr <= 23) {
		if (min >= 0 && min <= 59) {
			if (sec >= 0 && sec <= 59) {
				std::cout << "Correct time!" << std::endl;
			}
			else std::cout << "Incorrect time!" << std::endl;
		}
		else std::cout << "Incorrect time!" << std::endl;
	}
	else std::cout << "Incorrect time!" << std::endl;
}
void h5_task3() {
	system("cls");
	int year = 0;
	std::cout << "Enter year: " << std::endl;
	std::cin >> year;
	if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0) {
		std::cout << "This is a leap year!" << std::endl;
	}
	else std::cout << "This is not a leap year!" << std::endl;
}
void h5_task4() {
	system("cls");
	float age = 0.0;
	char sex = 0;
	std::cout << "Enter your age: ";
	std::cin >> age;
	std::cout << "Enter your sex (m\\f): ";
	std::cin >> sex;
	if (sex == 'f' || sex == 'm') {
		if (age > 0 && age <= 120) {
			if (age >= 55 && sex == 'f') std::cout << "You are in a retreatment age" << std::endl;
			else if (age >= 65 && sex == 'm') std::cout << "You are in a retreatment age" << std::endl;
			else std::cout << "You are not in a retreatment age" << std::endl;
		}
		else std::cout << "Wrong info!" << std::endl;
	}
	else std::cout << "Wrong info!" << std::endl;
	
}
void h5_task5() {
	system("cls");
	int i = 0;
	std::cout << "Whole numbers from 0 to 100: ";
	while (i <= 100) {
		std::cout << i << " ";
		i++;
	}
	std::cout << std::endl;
}
void h5_task6() {
	system("cls");
	int index = 0, number = 0, sum = 0;
	float avg = 0.0;
	while (index < 10) {
		std::cout << "Enter number " << index + 1 << " :";
		std::cin >> number;
		sum += number;
		index++;
	}
	avg = static_cast <float> (sum / 10);
	std::cout << "Sum : " << sum << std::endl;
	std::cout << "Average : " << avg << std::endl;
}
void h5_task7() {
	system("cls");
	int index = 0, odd_numbers = 0, counter = 1, sum = 0;
	std::cout << "Enter amout of unpaired numbers: ";
	std::cin >> odd_numbers;
	do {
		if (counter % 2 != 0) {
			index++;
			std::cout << "Odd number: " << counter << "  ||  Odd number`s square: " << pow(counter, 2) << " || " << std::endl;
			sum += pow(counter, 2);
		}
		counter++;
	} while (index != odd_numbers);
	//sum = odd_numbers * (2 * odd_numbers + 1) * (2 * odd_numbers - 1) / 3;
	std::cout << "=============================================" << std::endl;
	std::cout << "Sum of squares: " << sum << std::endl;
}
void h5_task8() {
	system("cls");
	int index = 0, number = 0, sum = 0;
	do {
		std::cout << "Enter number " << index + 1 << " :";
		std::cin >> number;
		sum += number;
		index++;
	} while (index < 7);
	std::cout << "Sum : " << sum << std::endl;
}
void h5_task9() {
	system("cls");
	float length = 0.0;
	int index = 0;
	enum Unit_of_length {
		mm = 1,
		dm,
		m,
		km
	};
	std::cout << "Hello! Enter needeble legth in centimeters: ";
	std::cin >> length;
	std::cout << "Now choose unit of length you want to convert to: " << std::endl;
	std::cout << "(1) millimeters" << std::endl;
	std::cout << "(2) decimeters" << std::endl;
	std::cout << "(3) meters" << std::endl;
	std::cout << "(4) kilometers" << std::endl;
	std::cout << "Your choise: ";
	std::cin >> index;
	std::cout << "=============================================" << std::endl;
	
	switch (index)
	{
	case mm: {
		std::cout << "Your length in millimeters will be: " << length * 10 << std::endl;
		break;
	}
	case dm: {
		std::cout << "Your length in decimeters will be: " << length / 10 << std::endl;
		break;
	}
	case m: {
		std::cout << "Your length in meters will be: " << length / 100 << std::endl;
		break;
	}
	case km: {
		std::cout << "Your length in kilometers will be: " << length / 100000 << std::endl;
		break;
	}
	default:
		std::cout << "You entered wrong index!" << std::endl;
		break;
	}
}


double printnum(double button_number, char sign, double result) {
	system("cls");
	/*double number = number_button;
	switch (number_button)
	{ 
	default:
		break;
	}*/
	if (result == 0) {
		result = button_number;
	}
	std::cout << "========CALCULATOR_2000========" << std::endl;
	std::cout << button_number << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << "| (1) 1 | (2) 2 | (3) 3 | (l) |" << std::endl;
	std::cout << "|-----------------------|  L  |" << std::endl;
	std::cout << "| (4) 4 | (5) 5 | (6) 6 |  O  |" << std::endl;
	std::cout << "|-----------------------|  G  |" << std::endl;
	std::cout << "| (7) 7 | (8) 8 | (9) 9 |-----|" << std::endl;
	std::cout << "|-----------------------| (@) |" << std::endl;
	std::cout << "|(C)clear| (0)0 |(S)stop|  S  |" << std::endl;
	std::cout << "|-----------------------|  I  |" << std::endl;
	std::cout << "| (+) + | (*) * | (-) - |  N  |" << std::endl;
	std::cout << "|-----------------------|-----|" << std::endl;
	std::cout << "|   (/) /   |   (=) =   | (#) |" << std::endl;
	std::cout << "|-----------------------|  T  |" << std::endl;
	std::cout << "| (^) sqr   |  ($) sqrt |  G  |" << std::endl;
	std::cout << "|-----------------------------|" << std::endl;
	std::cout << "|           (!) COS           |" << std::endl;
	std::cout << "===============================" << std::endl;
	switch (sign)
	{
	case '+':
		result += button_number;
		break;
	case '-':
		result -= button_number;
		break;
	case '*':
		result *= button_number;
		break;
	case '/':
		if (button_number != 0) {
			result /= button_number;
		}
		else {
			std::cout << "Error!" << std::endl;
		}
		break;
	case '^':
		result = pow(result, button_number);
		break;
	case '$':
		if (button_number /= 2 >= 0) {
			result = pow(result, (1 / button_number));
		}
		else {
			std::cout << "Error!" << std::endl;
		}
	case 'l':
		result = log(result)/log(button_number);
		break;
	case '@':
		result = sin(result);
		break;
	case '#':
		result = tan(result);
		break;
	case '!':
		result = cos(result);
		break;
	default:
		break;
	}
	return result;
}

void printsign(char sign) {
	system("cls");
	std::cout << "========CALCULATOR_2000========" << std::endl;
	std::cout << sign << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << "| (1) 1 | (2) 2 | (3) 3 | (l) |" << std::endl;
	std::cout << "|-----------------------|  L  |" << std::endl;
	std::cout << "| (4) 4 | (5) 5 | (6) 6 |  O  |" << std::endl;
	std::cout << "|-----------------------|  G  |" << std::endl;
	std::cout << "| (7) 7 | (8) 8 | (9) 9 |-----|" << std::endl;
	std::cout << "|-----------------------| (@) |" << std::endl;
	std::cout << "|(C)clear| (0)0 |(S)stop|  S  |" << std::endl;
	std::cout << "|-----------------------|  I  |" << std::endl;
	std::cout << "| (+) + | (*) * | (-) - |  N  |" << std::endl;
	std::cout << "|-----------------------|-----|" << std::endl;
	std::cout << "|   (/) /   |   (=) =   | (#) |" << std::endl;
	std::cout << "|-----------------------|  T  |" << std::endl;
	std::cout << "| (^) sqr   |  ($) sqrt |  G  |" << std::endl;
	std::cout << "|-----------------------------|" << std::endl;
	std::cout << "|           (!) COS           |" << std::endl;
	std::cout << "===============================" << std::endl;
}


void h5_task10() {
	system("cls");
	double number = 0;
	int button_number = 0;
	char button_sign = 0;

	printnum(button_number, button_sign, number);
	for (; ;) {

		std::cout << "Enter number: ";
		std::cin >> button_number;
		/*if (static_cast<char>(button_number) == 'c') {
			system("cls");
			double number = 0;
			print(number);
		}
		else if (static_cast<char>(button_number) == 's') {
			break;
		}*/
			number = printnum(button_number, button_sign, number);
			std::cout << "Enter sign: ";
			std::cin >> button_sign;
		if (button_sign == 'c' || button_sign == 'C') {
			system("cls");
			double number = 0;
			button_sign = 0;
			printnum(number, button_sign, number);
		}
		else if (button_sign == 's' || button_sign == 'S') {
			break;
		}
		else if (button_sign == '=') {
			number = printnum(number, button_sign, number);
			break;
		}
		else if (button_sign == '!' || button_sign == '@' || button_sign == '#') {
			number = printnum(number, button_sign, number);
			std::cout << "Enter sign: ";
			std::cin >> button_sign;
			if (button_sign == '=') {
				number = printnum(number, button_sign, number);
				break;
			}
		}else printsign(button_sign);		
	}
}