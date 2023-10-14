#include "homework_6.h"
#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include <cmath>
#include <random>
#include <vector>

void h6_get() {
	int index;
	do {

		std::cout << "================================" << std::endl;
		std::cout << "========= Homework_6 ===========" << std::endl;
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
		std::cout << "||Enter Index 11 for task 11: ||" << std::endl;
		std::cout << "||Enter Index 12 for task 12: ||" << std::endl;
		std::cout << "||Enter Index 13 for task 13: ||" << std::endl;
		std::cout << "||Enter Index 14 for task 14: ||" << std::endl;
		std::cout << "||Enter Index 0 to exit:      ||" << std::endl;
		std::cout << "================================" << std::endl;
		std::cout << "Enter your Index: ";
		std::cin >> index;
		switch (index)
		{
		case(1): {
			h6_task1();
			break;
		}
		case(2): {
			h6_task2();
			break;
		}
		case(3): {
			h6_task3();
			break;
		}
		case(4): {
			h6_task4();
			break;
		}
		case(5): {
			h6_task5();
			break;
		}
		case(6): {
			h6_task6();
			break;
		}
		case(7): {
			h6_task7();
			break;
		}
		case(8): {
			h6_task8();
			break;
		}
		case(9): {
			h6_task9();
			break;
		}
		case(10): {
			h6_task10();
			break;
		}
		case(11): {
			h6_task11();
			break;
		}
		case(12): {
			h6_task12();
			break;
		}
		case(13): {
			h6_task13();
			break;
		}
		case(14): {
			h6_task14();
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

void h6_task1() {
	system("cls");
	int array[10] = {}, product = 1;
	int i = 0; //counter
	for (i = 0; i < 10; i++) {
		std::cout << "Enter array [" << i + 1 << "] : ";
		std::cin >> array[i];
	}
	std::cout << std::endl;
	for (i = 0; i < 10; i++) {
		std::cout << "Array [" << i+1 << "] = " << array[i] << std::endl;
		product *= array[i];
	}
	std::cout << std::endl;
	std::cout << "Product of all array numbers is: " << product << std::endl;
}

void h6_task2() {
	system("cls");
	int array[7]{};
	int i = 0;  // counter
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist (-12, 50);

	std::cout << "Array: ";
	for (i = 0; i < 7; i++) {
		array[i] = dist(gen);
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	int positive = 0, negative = 0;

	for (i = 0; i < 7; i++) {
		if (array[i] < 0) {
			negative++;
		}
		else if(array[i] > 0) {
			positive++;
		}
	}
	std::cout << "Number of positive array memvers: " << positive << std::endl;
	std::cout << "Number of negative array memvers: " << negative << std::endl;


}

void h6_task3() {
	system("cls");
	long array[7] = {1 , 5 , 3, 2 ,2, 3, 12}, sum = 0;
	int i = 0;  // counter
	for (i = 0; i < 7; i++) {
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
		if (i % 2 != 0) {
			sum += array[i];
		}
	}
	std::cout << "Sum: " << sum << std::endl;
}


void h6_task4() {
	system("cls");
	double array[30] = {};
	int i = 0;
	for (i = 0; i < 30; i++) {
		array[i] = pow(2, i);
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
	}
	std::cout << std::endl;
	for (i = 29; i >= 0; i--) {
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
	}
}
void h6_task5() {
	system("cls");
	int array[] = {-5, 1, 82, -192, 22, 192, -11, -22, -1902, 1};
	int i = 0;
	std::cout << "Source array:" << std::endl;
	for (i = 0; i < (sizeof(array)/sizeof(array[0])); i++) {
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "New array:" << std::endl;
	for (i = 0;  i < (sizeof(array) / sizeof(array[0])); i++) {
		if (array[i] < 0) {
			array[i] = abs(array[i]);
		}
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
	}

}
void h6_task6() {
	system("cls");
	int array[] = { -5, 1, 82, -192, 22, 192, -11, -22, -1902, 1 };
	int i = 0;
	std::cout << "Source array:" << std::endl;
	for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "New array:" << std::endl;
	int max_number = array[0], max_index = 0, min_number = array[0], min_index = 0, temp = 0;
	for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		if (max_number < array[i]) {
			max_number = array[i];
			max_index = i;
		}
		if (min_number > array[i]) {
			min_number = array[i];
			min_index = i;
		}
	}
	temp = array[min_index];
	array[min_index] = array[max_index];
	array[max_index] = temp;
	for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
	}

	std::cout << std::endl;

}
void h6_task7() {
	system("cls");
	int array[] = { -5, 1, 82, -192, 22, 192, -11, -22, -1902, 1 }, sum = 0;
	int i = 0;
	std::cout << "Array:" << std::endl;
	for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
		if (i % 2 == 0) {
			sum += array[i];
		}
	}
	std::cout << std::endl;
	std::cout << "Sum: " << sum << std::endl;
}
void h6_task8() {
	system("cls");
	int array[] = { -5, 1, 82, -192, 22, 192, -11, -22, -1902, 1 };
	int i = 0;
	for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
	}
	int first_index = -1, second_index = -1;
	for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		if (array[i] < 0 && first_index == -1) {
			first_index = i;
		}
		else if (array[i] < 0) {
			second_index = i;
		}
	}
	std::cout << std::endl;
	std::cout << "Lenght: " << (second_index - 1) - (first_index + 1) << std::endl;

}
void h6_task9() {
	system("cls");
	int array[] = { -5, 1, 82, -192, 22, 192, -11, -22, -1902, 1 };
	int i = 0;
	std::cout << "Source array:" << std::endl;
	for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "New array:" << std::endl;
	int temp = 0;
	for (i = 0; i < (sizeof(array) / sizeof(array[0])); i+=2) {
		temp = array[i];
		array[i] = array[i + 1];
		array[i + 1] = temp;
	}
	for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		std::cout << "Array [" << i + 1 << "]: " << array[i] << std::endl;
	}
}
void h6_task10() {
	system("cls");
	int arrayA[] = { -5, 1, 82, -192, 22, 192, -11, -22, -1902, 1 };
	int arrayB[sizeof(arrayA) / sizeof(arrayA[0])] = {};
	int i = 0;
	std::cout << "Source arrayS:" << std::endl;
	for (i = 0; i < (sizeof(arrayA) / sizeof(arrayA[0])); i++) {
		std::cout << "Array A [" << i + 1 << "]: " << arrayA[i] << std::endl;
	}
	std::cout << std::endl;
	for (i = 0; i < (sizeof(arrayB) / sizeof(arrayB[0])); i++) {
		std::cout << "Array B [" << i + 1 << "]: " << arrayB[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "New array B:" << std::endl;
	for (i = 0; i < (sizeof(arrayB) / sizeof(arrayB[0])); i++) {
		arrayB[i] = arrayA[i];
		std::cout << "Array B [" << i + 1 << "]: " << arrayB[i] << std::endl;
	}
}
void h6_task11() {
	system("cls");
	int arrayA[] = { -5, 1, 82, -192, 22, 192, -11, -22, -1902, 1 };
	int *arrayB = new int[sizeof(arrayA) / sizeof(arrayA[0])]();
	int i = 0;
	for (i = 0; i < (sizeof(arrayA) / sizeof(arrayA[0])); i++) {
		arrayB[sizeof(arrayB) / sizeof(arrayB[0]) - i - 1] = arrayA[i];
	}
	std::cout << "|| Index || Array A || Array B ||" << std::endl;
	for (i = 0; i < (sizeof(arrayB) / sizeof(arrayB[0])); i++) {
		std::cout << "     " << i << "      " << arrayA[i] << "          " << arrayB[i] << "        " << std::endl;
	}
	delete[] arrayB;
}
void h6_task12() {
	system("cls");
	int K = 0;
	std::cout << "Enter size of arrays: ";
	std::cin >> K;
	int* arrayA = new int[K] { -5, 1, 82, -192, 22, 192, -11, -22, -1902, 1 };
	int* arrayB = new int[K] { 12, 16, -10, 9, 61 };
	int* arrayC = new int[K * 2]();
	int i = 0;
	for (i = 0; i < K; i++) {
		arrayC[i] = arrayA[i];
		arrayC[i + K] = arrayB[i];
	}
	for (i = 0; i < 2 * K; i++) {
		std::cout << "Array C [" << i + 1 << "]: " << arrayC[i] << std::endl;
	}
	
}
void h6_task13() {
	system("cls");
	int K = 0;
	std::cout << "Enter size of array: ";
	std::cin >> K;
	if (K % 2 != 0) {
		std::cout << "WRONG SIZE!" << std::endl;
	}
	std::vector <int> arrayA;
	arrayA.resize(K);
	int i = 0;
	for (i = 0; i < K; i++) {
		std::cout << "Enter element A[" << i << "]: ";
		std::cin >> arrayA.at(i);
	}
	std::cout << std::endl;
	std::vector <int> arrayB;
	arrayB.resize(K / 2);
	std::vector <int> arrayC;
	arrayC.resize(K / 2);
	for (i = 0; i < K / 2; i++) {
		arrayB[i] = arrayA[i];
		arrayC[i] = arrayA[i + K / 2];
	}

	std::cout << "Array B: ";
	for (auto const& elementB : arrayB) {
		std::cout << elementB << " ";
	}
	std::cout << std::endl;
	std::cout << "Array C: ";
	for (auto const& elementC : arrayC) {
		std::cout << elementC << " ";
	}
	std::cout << std::endl;

}
void h6_task14() {
	system("cls");
	int K = 0;
	std::cout << "Enter size of array: ";
	std::cin >> K;
	std::vector <int> arrayA;
	arrayA.resize(K);
	int i = 0;
	for (i = 0; i < K; i++) {
		std::cout << "Enter element A[" << i+1 << "]: ";
		std::cin >> arrayA.at(i);
	}

	enum direction {
		left = 1,
		right
	};
	std::vector <int> arrayB;
	arrayB.resize(K);
	int direction = 0;
	std::cout << "Enter direction (left 1 \ right 2): ";
	std::cin >> direction;
	int steps = 0;
	switch (direction)
	{
	case left:
		std::cout << "Enter amount of steps: ";
		std::cin >> steps;
		if (steps > arrayB.size()) {
			std::cout << "Wrong step!" << std::endl;
			break;
		}
		for (i = 0; i < arrayB.size() - steps; i++) {
			arrayB[i] = arrayA[i + steps];
		}
		for (i = arrayB.size() - steps; i < arrayB.size(); i++) {
			arrayB[i] = arrayA[i - arrayB.size() + steps];
		}
		std::cout << std::endl;
		std::cout << "Array A: ";
		for (i = 0; i < arrayA.size(); i++) {
			std::cout << arrayA[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Array B: ";
		for (i = 0; i < arrayB.size(); i++) {
			std::cout << arrayB[i] << " ";
		}
		std::cout << std::endl;
		break;
	case right:
		std::cout << "Enter amount of steps: ";
		std::cin >> steps;
		if (steps > arrayB.size()) {
			std::cout << "Wrong step!" << std::endl;
			break;
		}
		for (i = 0; i < arrayB.size() - steps; i++) {
			arrayB[i + steps] = arrayA[i];
		}
		for (i = arrayB.size() - steps; i < arrayB.size(); i++) {
			arrayB[i - arrayB.size() + steps] = arrayA[i];
		}
		std::cout << std::endl;
		std::cout << "Array A: ";
		for (i = 0; i < arrayA.size(); i++) {
			std::cout << arrayA[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Array B: ";
		for (i = 0; i < arrayB.size(); i++) {
			std::cout << arrayB[i] << " ";
		}
		std::cout << std::endl;
		break;
	default:
		std::cout << "Wrong number!" << std::endl;
		break;
	}

}
