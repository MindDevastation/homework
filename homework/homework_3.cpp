#include "homework_3.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>

void h3_get() {
	int index;
	do{
		
		std::cout << "==============================" << std::endl;
		std::cout << "======== Homework_3 ==========" << std::endl;
		std::cout << "||Enter Index 1 for task 1: ||" << std::endl;
		std::cout << "||Enter Index 2 for task 2: ||" << std::endl;
		std::cout << "||Enter Index 3 for task 3: ||" << std::endl;
		std::cout << "||Enter Index 4 for task 4: ||" << std::endl;
		std::cout << "||Enter Index 5 for task 5: ||" << std::endl;
		std::cout << "||Enter Index 6 for task 6: ||" << std::endl;
		std::cout << "||Enter Index 7 for task 7: ||" << std::endl;
		std::cout << "||Enter Index 8 for task 8: ||" << std::endl;
		std::cout << "||Enter Index 0 to exit:    ||" << std::endl;
		std::cout << "==============================" << std::endl;
		std::cout << "Enter your Index: ";
		std::cin >> index;
		switch (index)
		{
		case(1): {
			h3_task1();
			break;

		}
		case(2): {
			h3_task2();
			break;
		}
		case(3): {
			h3_task3();
			break;
		}
		case(4): {
			h3_task4();
			break;
		}
		case(5): {
			h3_task5();
			break;
		}
		case(6): {
			h3_task6();
			break;
		}
		case(7): {
			h3_task7();
			break;
		}
		case(8): {
			h3_task8();
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

void h3_task1()
{
	system("cls");
	int a = 0, b = 0;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;

}

void h3_task2()
{
	system("cls");
	int km = 0;
	std::cout << "Enter km: ";
	std::cin >> km;
	std::cout << km << "km will be " << km * 1000 << "m" << std::endl;

}

void h3_task3()
{
	system("cls");
	float cost_per_minute = 15.17;
	int minutes = 62;
	std::cout << "Minutes: " << minutes << std::endl;
	std::cout << "Cost per minute: " << cost_per_minute << std::endl;
	std::cout << "Total: " << minutes * cost_per_minute << std::endl;

}

void h3_task4()
{
	system("cls");
	constexpr float Fish_cost = 11.50, Bread_cost = 14.22, Milk_cost = 13, Sugar_cost = 5;
	int Fish = 2, Bread = 1, Milk = 5, Sugar = 3;
	std::cout << "==========================" << std::endl;
	std::cout << "||======== Bill: =======||" << std::endl;
	std::cout << "||======================||" << std::endl;
	std::cout << "||                      || " << std::endl;
	std::cout << Fish << " x Fish * " << Fish_cost << " = " << Fish * Fish_cost << std::endl;
	std::cout << Bread << " x Bread * " << Bread_cost << " = " << Bread * Bread_cost << std::endl;
	std::cout << Milk << " x Milk * " << Milk_cost << " = " << Milk * Milk_cost << std::endl;
	std::cout << Sugar << " x Sugar * " << Sugar_cost << " = " << Sugar * Sugar_cost << std::endl;
	std::cout << "--------" << std::endl;
	std::cout << "Total: " << Fish * Fish_cost + Bread * Bread_cost + Milk * Milk_cost + Sugar * Sugar_cost << std::endl;
	std::cout << "||                      ||" << std::endl;
	std::cout << "==========================" << std::endl;

}

void h3_task5()
{
	system("cls");
	int amount = 0;
	constexpr float course_eur = 39.56, course_usd = 36.92, course_zt = 8.56;
	std::string cur;
	/*enum currency {
		eur = 1,
		usd,
		zt
	};*/
	std::cout << "Greetings! Please, enter amount of currency you want to convert: ";
	std::cin >> amount;
	std::cout << "Tooday course for eur is: " << course_eur << std::endl;
	std::cout << "Tooday course for usd is: " << course_usd << std::endl;
	std::cout << "Tooday course for zt is: " << course_zt << std::endl;
	std::cout << "What currency do you want to convert into uah ? (eur / usd / zt): ";
	std::cin >> cur;

	/*switch (cur) {
	case eur:
		std::cout << amount << "eur = " << amount * course_eur << "uah" << std::endl;
		break;
	case usd:
		std::cout << amount << "usd = " << amount * course_usd << "uah" << std::endl;
		break;
	case zt:
		std::cout << amount << "zt = " << amount * course_zt << "uah" << std::endl;
		break;
	default:
		std::cout << " Wrong currency " << std::endl;
		break;
	}*/

	if (cur == "eur") std::cout << amount << "eur = " << amount * course_eur << "uah" << std::endl;
	else if (cur == "usd") std::cout << amount << "usd = " << amount * course_usd << "uah" << std::endl;
	else if (cur == "zt") std::cout << amount << "zt = " << amount * course_zt << "uah" << std::endl;
	else std::cout << " Wrong currency " << std::endl;

}


void h3_task6()
{
	system("cls");
	int Full_revolution = 686, revolves = 0;
	std::cout << "Mars revolves in orbit around the Sun in " << Full_revolution << "days." << std::endl;
	std::cout << "Enter amount of revolves: ";
	std::cin >> revolves;
	std::cout << "It will take " << Full_revolution * revolves << " Earth days or " << Full_revolution * revolves / 366 << " Earth years to make Mars " << revolves << " revolves around the Sun" << std::endl;

}

void h3_task7()
{
	system("cls");
	float number = 0.0;
	std::cout << "Enter number: ";
	std::cin >> number;
	std::cout << number << "^2 = " << pow(number, 2) << std::endl;
	std::cout << number << "^3 = " << pow(number, 3) << std::endl;

}

void h3_task8()
{
	system("cls");
	float gas = 154.2, cost = 16.21, path = 872.9, total_gas = 0.0;
	total_gas = gas / 100 * path;
	std::cout << "Amount of gas for 100km: " << gas << "l" << std::endl;
	std::cout << "Costs for 1l of gas: " << cost << "uah" << std::endl;
	std::cout << "Path: " << path << "km" << std::endl;
	std::cout << "To travel " << path << "km " << "you need to spend " << total_gas << "l of gasoline, which will cost " << total_gas * cost << "uah" << std::endl;
}
