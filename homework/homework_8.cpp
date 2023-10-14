#include "homework_8.h"
#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include <cmath>
#include <random>
#include <vector>

std::random_device rd1;
std::mt19937 gen1(rd1());
std::uniform_int_distribution<> dist_8(-99, 99);
std::uniform_int_distribution<> dist_8_2(1, 10);



void h8_get() {
	int index;
	do {

		std::cout << "================================" << std::endl;
		std::cout << "========= Homework_8 ===========" << std::endl;
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
			h8_task1();
			break;
		}
		case(2): {
			h8_task2();
			break;
		}
		case(3): {
			h8_task3();
			break;
		}
		case(4): {
			h8_task4();
			break;
		}
		case(5): {
			h8_task5();
			break;
		}
		case(6): {
			h8_task6();
			break;
		}
		case(7): {
			h8_task7();
			break;
		}
		case(8): {
			h8_task8();
			break;
		}
		case(9): {
			h8_task9();
			break;
		}
		case(10): {
			h8_task10();
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

void h8_task1() {
	system("cls");

	int month = 0;
	for (month = 1; month <= 12; month++) {
		std::cout << "Month: ";
		Month_Name(month);
		std::cout << " - there is " << Month_Day(month) << " days in this month" << std::endl;
	}
}
void h8_task2() {
	system("cls");
	int i = 0, N = 0, sum = 0;
	char ans = 0;
	for (i = 0; ; i++) {
		std::cout << "Enter argument: ";
		std::cin >> N;
		sum += (i + 1) * Sum(N);
		std::cout << "Do you want to continue (y\\n): ";
		std::cin >> ans;
		if (ans == 'n') {
			break;
		}
		else {
			continue;
		}
	}
	std::cout << "Sum of arguments: " << sum << std::endl;
}
void h8_task3() {
	system("cls");
	int i = 0, N = 0, sum = 0;
	char ans = 0;
	for (i = 0; ; i++) {
		std::cout << "Enter argument: ";
		std::cin >> N;
		sum += SumParni(N);
		std::cout << "Do you want to continue (y\\n): ";
		std::cin >> ans;
		if (ans == 'n') {
			break;
		}
		else {
			continue;
		}
	}
	std::cout << "Sum of arguments: " << sum << std::endl;
}
void h8_task4() {
	system("cls");
	int i = 0, N = 0, sum = 0;
	char ans = 0;
	for (i = 0; ; i++) {
		std::cout << "Enter argument: ";
		std::cin >> N;
		sum += Count(N);
		std::cout << "Do you want to continue (y\\n): ";
		std::cin >> ans;
		if (ans == 'n') {
			break;
		}
		else {
			continue;
		}
	}
	std::cout << "Amount of single-digit arguments: " << sum << std::endl;
}
void h8_task5() {
	system("cls");
	int i = 0, double_count = 0;
	double  N = 0, sum = 0;
	char ans = 0;
	for (i = 0; ; i++) {
		std::cout << "Enter argument: ";
		std::cin >> N;
		if (Avg(N) != 0) {
			double_count++;
		}
		sum += Avg(N); 
		std::cout << "Do you want to continue (y\\n): ";
		std::cin >> ans;
		if (ans == 'n') {
			break;
		}
		else {
			continue;
		}
	}
	std::cout << "Average of double arguments: " << (sum/double_count) << std::endl;

}
void h8_task6() {
	system("cls");
	int i = 0;
	double  N = 0, sum = 0;
	char ans = 0;
	for (i = 0; ; i++) {
		std::cout << "Enter argument: ";
		std::cin >> N;
		sum += Count(N);
		std::cout << "Do you want to continue (y\\n): ";
		std::cin >> ans;
		if (ans == 'n') {
			break;
		}
		else {
			continue;
		}
	}
	std::cout << "Amount of non-zero double arguments: " << sum << std::endl;
}
void h8_task7() {
	system("cls");
	int one = dist_8(gen1), two = dist_8(gen1), three = dist_8(gen1);
	int dynamic_array_length = dist_8_2(gen1);
	int* dynamic_number_array = new int[dynamic_array_length];
	int biggest = 0, i = 0;
	std::cout << "Fist number: " << one << std::endl;
	std::cout << "Second number: " << two << std::endl;
	std::cout << "Third number: " << three << std::endl;
	std::cout << std::endl;
	std::cout << "Biggest number of " << one << " and " << two << " is " << Biggest(one, two) << std::endl;
	std::cout << std::endl;
	std::cout << "Biggest number of " << one << ", " << two << " and " << three << " is " << Biggest(one, two, three) << std::endl;
	std::cout << std::endl;
	std::cout << "Dynamic array: ";
	for (i = 0; i < dynamic_array_length; i++) {
		dynamic_number_array[i] = dist_8(gen1);
		std::cout << dynamic_number_array[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Biggest of N-number array: " << Biggest(dynamic_number_array);
	std::cout << std::endl;

	delete[] dynamic_number_array;

}
void h8_task8() {
	system("cls");
	int i = 0, k = 0;
	int array_length = dist_8_2(gen1);
	int* one_dim_array = new int[array_length];
	int** two_dim_array = new int*[array_length];
	for (i = 0; i < array_length; i++) two_dim_array[i] = new int[3];

	std::cout << "One dimentional array: " << std::endl;
	for (i = 0; i < array_length; i++) {
		one_dim_array[i] = dist_8(gen1);
		std::cout << one_dim_array[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Amount of two-number elements: " << Numbers(one_dim_array, array_length) << std::endl;
	std::cout << std::endl;
	std::cout << "Two dimentional array: " << std::endl;
	for (i = 0; i < array_length; i++) {
		for (k = 0; k < 3; k++) {
			two_dim_array[i][k] = dist_8(gen1);
			std::cout << two_dim_array[i][k] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Amount of two-number elements: " << Numbers(two_dim_array, array_length) << std::endl;
	std::cout << std::endl;

	delete[] one_dim_array;
	for (i = 0; i < array_length; i++)delete[] two_dim_array[i];
	delete[] two_dim_array;
}
void h8_task9() {
	system("cls");
	int one = dist_8(gen1), two = dist_8(gen1), three = dist_8(gen1);
	std::cout << "Fist number: " << one << std::endl;
	std::cout << "Second number: " << two << std::endl;
	std::cout << "Third number: " << three << std::endl;
	std::cout << "Sum1: " << Sum(one, two, three) << std::endl;

	int array_length = dist_8_2(gen1);
	int* arr = new int[array_length];
	int i = 0;

	std::cout << "Array: " << std::endl;
	for (i = 0; i < array_length; i++) {
		arr[i] = dist_8(gen1);
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Sum2: " << Sum(arr, array_length) << std::endl;
	delete[] arr;
}
void h8_task10() {
	system("cls");
	int one = dist_8(gen1), two = dist_8(gen1), three = dist_8(gen1);
	std::cout << "Fist number: " << one << std::endl;
	std::cout << "Second number: " << two << std::endl;
	std::cout << "Third number: " << three << std::endl;
	std::cout << "Average of " << one << " and " << two << " is " << Avg_n(one, two) << std::endl;
	std::cout << "Average of " << one << ", " << two << " and " << three << " is " << Avg_n(one, two, three) << std::endl;

	int array_length = dist_8_2(gen1);
	int* arr = new int[array_length];
	int i = 0;

	std::cout << "Array: " << std::endl;
	for (i = 0; i < array_length; i++) {
		arr[i] = dist_8(gen1);
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Average of Array is " << Avg_n(arr, array_length) << std::endl;
	delete[] arr;
}

//Task 1
int Month_Day(int your_month) {
	int days = 0;
	if (your_month == 1 || your_month == 3 || your_month == 5 || your_month == 7 || your_month == 8 || your_month == 10 || your_month == 12) {
		return days = 31;
	}
	else if (your_month == 4 || your_month == 6 || your_month == 9 || your_month == 11) {
		return days = 30;
	}
	else {
		return days = 28;
	}

}

void Month_Name(int your_month) {
	enum month {
		January = 1,
		February,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		November,
		December
	};

	switch (your_month)
	{
	case January:
		std::cout << "Junary";
		break;
	case February:
		std::cout << "February";
		break;
	case March:
		std::cout << "March";
		break;
	case April:
		std::cout << "April";
		break;
	case May:
		std::cout << "May";
		break;
	case June:
		std::cout << "June";
		break;
	case July:
		std::cout << "July";
		break;
	case August:
		std::cout << "August";
		break;
	case September:
		std::cout << "September";
		break;
	case October:
		std::cout << "October";
		break;
	case November:
		std::cout << "November";
		break;
	case December:
		std::cout << "December";
		break;
	default:
		std::cout << "Wrong month" << std::endl;
		break;
	}
}

//Task 2
int Sum(int N) {
	return N;
}

//Task 3
int SumParni(int N) {
	if (N % 2 == 0) {
		return N;
	}
}

//Task 4
int Count(int N) {
	if (N > -10 && N < 10) {
		return 1;
	}
	return 0;
}

//Task 5
double Avg(double N) {
	if (N == static_cast <double> (static_cast <int> (N))) {
		return 0;
	}
	else {
		return N;
	}
}

//Task 6
double Count(double N) {
	if (N == static_cast <double> (static_cast <int> (N))) {
		return 0;
	}
	else {
		if (N != 0) {
			return 1;
		}
	}
}

//Task 7
int Biggest(int first, int second) {
	if (first > second) {
		return first;
	} return second;
}

int Biggest(int first, int second, int third) {
	if (first >= second) {
		if (first >= third) {
			return first;
		}
	}
	else if (second >= third) {
		return second;
	}
	return third;
}

int Biggest(int* array) {
	int biggest = array[0];
	for (int i = 0; i < (sizeof(array) / sizeof(array[0])) + 1; i++) {
		if (biggest < array[i]) {
			biggest = array[i];
		}
	}
	return biggest;
}

//Task 8
int Numbers(int* array, int length) {
	int counter = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] >= 10 && array[i] < 100) {
			counter++;
		}
		else if (array[i] > -100 && array[i] <= -10) {
			counter++;
		}
	}
	return counter;
}

int Numbers(int** array, int length) {
	int counter = 0;
	for (int i = 0; i < length; i++) {
		for (int k = 0; k < 3; k++) {
			if (array[i][k] >= 10 && array[i][k] < 100 || array[i][k] > -100 && array[i][k] <= -10) {
				counter++;
			}
		}
	}
	return counter;
}

//Task 9
int Sum(int first, int second, int third) {
	return (first * second) + (second * third);
}

int Sum(int* array, int lenght) {
	int multi = 0, sum = 0;
	for (int i = 0; i < lenght - 1; i++) {
		multi = array[i] * array[i + 1];
		sum += multi;
	}
	return sum;
}

//Task 10
int Avg_n(int first, int second) {
	return (first + second) / 2;
}

int Avg_n(int first, int second, int third) {
	return (first + second + third) / 3;
}

int Avg_n(int* array, int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += array[i];
	}
	return sum / length;
}