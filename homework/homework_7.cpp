#include "homework_7.h"
#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include <cmath>
#include <random>
#include <vector>

int numbersAmount(char* stringArr);
void encrypt(char* stringArr);

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dist(-50.01, 50.01);
std::uniform_int_distribution<> dist2(5, 10);
std::uniform_int_distribution<> dist3(-5, 5);
std::uniform_int_distribution<> dist4(-99, 99);

void h7_get() {
	int index;
	do {

		std::cout << "================================" << std::endl;
		std::cout << "========= Homework_7 ===========" << std::endl;
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
			h7_task1();
			break;
		}
		case(2): {
			h7_task2();
			break;
		}
		case(3): {
			h7_task3();
			break;
		}
		case(4): {
			h7_task4();
			break;
		}
		case(5): {
			h7_task5();
			break;
		}
		case(6): {
			h7_task6();
			break;
		}
		case(7): {
			h7_task7();
			break;
		}
		case(8): {
			h7_task8();
			break;
		}
		case(9): {
			h7_task9();
			break;
		}
		case(10): {
			h7_task10();
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

void h7_task1() {
	system("cls");
	int hr = 0, min = 0, sec = 0;
	std::cout << "Enter time (hr min sec): ";
	std::cin >> hr >> min >> sec;
	int* hour = &hr, * minute = &min, * second = &sec;
	std::cout << "Time passed: " << *second + *minute * 60 + *hour * 3600 << std::endl;
}
void h7_task2() {
	system("cls");
	int* first_var_dynamic = new int (dist(gen));
	float* second_var_dynamic = new float(dist(gen));
	double* third_var_dynamic = new double(dist(gen));
	std::cout << "Int variable: " << *first_var_dynamic << std::endl;
	std::cout << "Float variable: " << *second_var_dynamic << std::endl;
	std::cout << "Double variable: " << *third_var_dynamic << std::endl;
	std::cout << "Product of numbers: " << *first_var_dynamic * *second_var_dynamic * *third_var_dynamic << std::endl;
	std::cout << "Average: " << (*first_var_dynamic + *second_var_dynamic + *third_var_dynamic) / 3<< std::endl;
	delete first_var_dynamic, second_var_dynamic, third_var_dynamic;

}
void h7_task3() {
	system("cls");
	int arrayA_length = dist2(gen), arrayB_length = dist2(gen);  
	std::cout << "A " << arrayA_length << " B " << arrayB_length << std::endl;
	int* arrayA = new int [arrayA_length] {};
	int* arrayB = new int [arrayB_length] {};
	int i = 0;
	std::cout << "Array A:";
	for (i = 0; i < arrayA_length; i++) {
		*(arrayA + i) = dist3(gen);
		std::cout << " " << *(arrayA + i);
	}
	std::cout << std::endl;
	std::cout << "Array B:";
	for (i = 0; i < arrayB_length; i++) {
		*(arrayB + i) = dist3(gen);
		std::cout << " " << *(arrayB + i);
	}
	std::cout << std::endl;
	int* arrayTemp = new int [arrayB_length] {};
	int k = 0; // counter of numbers !% 3, 7
	for (i = 0; i < arrayB_length; i++) {
		if (*(arrayB + i) % 3 == 0 || *(arrayB + i) % 7 == 0 && *(arrayB + i) != 0) {
			*(arrayTemp + i - k) = *(arrayB + i);
		}
		else if(*(arrayB + i) % 3 != 0 && *(arrayB + i) % 7 != 0 || *(arrayB + i) == 0){
			k++;
		}
	}
	int m = 0; //counter of number untill find first 0
	do {
		m++;
	} while (*(arrayTemp + m) != 0);
	std::cout << "Array Temp:";
	for (i = 0; i < arrayB_length; i++) {
		std::cout << " " << arrayTemp[i];
	}
	std::cout << std::endl;
	std::cout << "M: " << m << std::endl;

	int arrayC_length = arrayA_length + m;
	
	int* arrayC = new int [arrayC_length] {};
	
	for (i = 0; i < arrayA_length; i++) {
		*(arrayC + i) = *(arrayA + i);
	}
	for (i = arrayA_length; i < arrayC_length; i++) {
		*(arrayC + i) = *(arrayTemp + i - arrayA_length);
	}
	std::cout << "Array C:";
	for (i = 0; i < arrayC_length; i++) {
		std::cout << " " << *(arrayC + i);
	}
	delete[] arrayA, arrayB, arrayC, arrayTemp;
}
void h7_task4() {
	system("cls");
	int array_length = dist2(gen);
	int* arrayInt = new int [array_length] {};
	int* arrayTempRez = new int [array_length] {};
	int i = 0;
	for (i = 0; i < array_length; i++) {
		*(arrayInt + i) = dist3(gen);
	}
	std::cout << "Array of Integers : ";
	for (i = 0; i < array_length; i++) {
		std::cout << *(arrayInt + i) << " ";
	}
	std::cout << std::endl;

	if (*(arrayInt) % 2 == 0) {
		for (i = 0; i < array_length; i++) {
			if (*(arrayInt + i) % 2 == 0) {
				*(arrayTempRez + i) = 0;
			}
			else *(arrayTempRez + i) = *(arrayInt + i);
		}
	}
	else if (*(arrayInt) % 2 != 0) {
		for (i = 0; i < array_length; i++) {
			if (*(arrayInt + i) % 2 != 0) {
				*(arrayTempRez + i) = 0;
			}
			else  *(arrayTempRez + i) = *(arrayInt + i);
		}
	}
	delete[] arrayInt;
	int temp = 0, zero = 0;
	for (i = 0; i < array_length - 1; i++) {
		for (int k = 0; k < array_length - 1; k++) {
			if (*(arrayTempRez + k) == 0) {
				temp = *(arrayTempRez + k);
				*(arrayTempRez + k) = *(arrayTempRez + k + 1);
				*(arrayTempRez + k + 1) = temp;
			}
		}
	}

	do {
		zero++;
	} while (*(arrayTempRez + zero) != 0);
	std::cout << "Non zeros : " << zero << std::endl;

	int* arrayEnd = new int [zero] {};
	for (i = 0; i < zero; i++) {
		*(arrayEnd + i) = *(arrayTempRez + i);
	}

	std::cout << "Rezult Array : ";
	for (i = 0; i < zero; i++) {
		std::cout << *(arrayEnd + i) << " ";
	}
	std::cout << std::endl;
	delete[] arrayTempRez, arrayEnd;
}
void h7_task5() {
	system("cls");
	int array_length = dist2(gen);
	int* arrayInt = new int [array_length] {};
	int i = 0;

	for (i = 0; i < array_length; i++) {
		*(arrayInt + i) = dist3(gen);
	}

	std::cout << "Array of Integers : ";
	for (i = 0; i < array_length; i++) {
		std::cout << *(arrayInt + i) << " ";
	}
	std::cout << std::endl;
	for (i = 0; i < array_length; i++) {
		if (*(arrayInt + i) % 2 != 0) {
			*(arrayInt + i) = 0;
		}
	}

	int temp = 0, zero = 0;
	for (i = 0; i < array_length - 1; i++) {
		for (int k = 0; k < array_length - 1; k++) {
			if (*(arrayInt + k) == 0) {
				temp = *(arrayInt + k);
				*(arrayInt + k) = *(arrayInt + k + 1);
				*(arrayInt + k + 1) = temp;
			}
		}
	}

	do {
		zero++;
	} while (*(arrayInt + zero) != 0);

	int* arrayRez = new int [zero] {};
	for (i = 0; i < zero; i++) {
		*(arrayRez + i) = *(arrayInt + i);
	}

	std::cout << "Rezult Array : ";
	for (i = 0; i < zero; i++) {
		std::cout << *(arrayRez + i) << " ";
	}
	std::cout << std::endl;
	delete[] arrayInt, arrayRez;
}
void h7_task6() {
	system("cls");
	int array_length = dist2(gen);
	int* arrayInt = new int [array_length] {};
	int i = 0;

	for (i = 0; i < array_length; i++) {
		*(arrayInt + i) = dist4(gen);
	}

	std::cout << "Array of Integers : ";
	for (i = 0; i < array_length; i++) {
		std::cout << *(arrayInt + i) << " ";
	}
	std::cout << std::endl;

	int* arrayLongInt = new int [array_length * 2] {};
	int m = 0, k = 0;
	do {
		
		*(arrayLongInt + m) = abs(*(arrayInt + k) % 10);
		*(arrayLongInt + m + 1) = *(arrayInt + k);
		m += 2;
		k++;
	} while (m < array_length * 2);
	std::cout << "New Array of Integers : ";
	for (i = 0; i < array_length * 2; i++) {
		std::cout << *(arrayLongInt + i) << " ";
	}
	std::cout << std::endl;
	delete[] arrayInt, arrayLongInt;
}
void h7_task7() {
	system("cls");
	char* string = new char [30] {"Hello + it`s me + MARIO! "};
	std::cout << "Char string: " << string << std::endl;
	std::cout << std::endl;
	int n = strlen(string);
	for (int i = 0; i < n; i++) {
		if (*(string + i) == '+') {
			*(string + i) = '-';
		}
	}

	std::cout << "New Char string: " << string << std::endl;
	std::cout << std::endl;

	delete[] string;
}
void h7_task8() {
	system("cls");
	char* str = new char [256] {"Hello, it`s me, MARIO! My 3rd number was 012345678910. "};
	int amount = numbersAmount(str);
	std::cout << "Amount of number: " << amount << std::endl;
	delete[] str;
}
void h7_task9() {
	system("cls");
	char* str = new char [256] {"AaBbCcDd YyZz"};
	encrypt(str);
	delete[] str;
}
void h7_task10() {
	system("cls");
	char* str = new char [256] {"Aaosdnjjjjaqqajeiaiwjjj"};
	char* strRez = new char [256] {};
	std::cout << "Char array: " << str << std::endl;
	int i = 0, k = 0, m = 0, j = 0; // i - for counter, k - new array counter, m - amout of repeatings, j - do while counter
	int n = strlen(str) + 1;
	for (i = 0; i < strlen(str); i++) {
		if (*(str + k) != *(str + k + 1)) {
			*(strRez + i) = *(str + k);
			k++;
		}
		else {
			*(strRez + i) = *(str + k);
			m = 0;
			j = k;
			do {
				m++;
				j++;
			} while (*(str + j) == *(str + k));
			k+=m;
		}
	}
	std::cout << "New char array: " << strRez << std::endl;
	delete[] str, strRez;
}

int numbersAmount(char* stringArr) {
	std::cout << "Char string: " << stringArr << std::endl;
	int i = 0, k = 0;
	do {
		k++;
		if (*(stringArr + k) >= '0' && *(stringArr + k) <= '9') {
			i++;
		}
	} while (k < strlen(stringArr));
	return i;
}

void encrypt(char* stringArr) {
	std::cout << "Char array: " << stringArr << std::endl;
	for (int i = 0; i < strlen(stringArr); i++) {
		if (*(stringArr + i) >= 'A' && *(stringArr + i) <= 'Z' || *(stringArr + i) >= 'a' && *(stringArr + i) <= 'z') {
			if (*(stringArr + i) == 'z') {
				*(stringArr + i) = 'a';
			}
			else if (*(stringArr + i) == 'Z') {
				*(stringArr + i) = 'A';
			}
			else {
				*(stringArr + i) += 1;
			}
		}
	}
	std::cout << "New char array: " << stringArr << std::endl;
}
