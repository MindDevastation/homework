#include <iostream>
#include "homework_3.h"
#include "homework_4.h"
#include <stdlib.h>


int main() {
	int index;
	do {

		std::cout << "====================================" << std::endl;
		std::cout << "======== List_of_Homeworks =========" << std::endl;
		std::cout << "||Enter Index 1 for Homework 3:   ||" << std::endl;
		std::cout << "||Enter Index 2 for Homework 4:   ||" << std::endl;
		std::cout << "||Enter Index 0 to exit:          ||" << std::endl;
		std::cout << "====================================" << std::endl;
		std::cout << "Enter your Index: ";
		std::cin >> index;
		system("cls");
		switch (index)
		{
		case(1): {
			h3_get();
			break;
		}
		case(2): {
			h4_get();
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

	return 0;
}