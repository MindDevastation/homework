#include "homework_9.h"
#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include <cmath>
#include <random>
#include <vector>

std::random_device rd_9;
std::mt19937 gen2(rd_9());
std::uniform_real_distribution<double> dist_9(-99.01, 99.01);
std::uniform_int_distribution<> dist_9_2(-10, 10);



void h9_get() {
	int index;
	do {

		std::cout << "================================" << std::endl;
		std::cout << "========= Homework_8 ===========" << std::endl;
		std::cout << "||Enter Index 1 for task 1:   ||" << std::endl;
		std::cout << "||Enter Index 2 for task 2:   ||" << std::endl;
		std::cout << "||Enter Index 3 for task 3:   ||" << std::endl;
		std::cout << "||Enter Index 4 for task 4:   ||" << std::endl;
		std::cout << "||Enter Index 0 to exit:      ||" << std::endl;
		std::cout << "================================" << std::endl;
		std::cout << "Enter your Index: ";
		std::cin >> index;
		switch (index)
		{
		case(1): {
			h9_task1();
			break;
		}
		case(2): {
			h9_task2();
			break;
		}
		case(3): {
			h9_task3();
			break;
		}
		case(4): {
			h9_task4();
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

//Task 1
void h9_task1() {
	system("cls");
	struct Drib {
	private:
		double x;
	public:
		Drib() {
			x = 0.0;
		}
		~Drib() {}
		double getX() {
			return x;
		}
		void setX(double number) {
			x = number;
		}
	};
	Drib Arg1;
	Drib Arg2;
	Arg1.setX(dist_9(gen2));
	Arg2.setX(dist_9(gen2));

	std::cout << "Fraction 1: " << Arg1.getX() << std::endl;
	std::cout << "Fraction 2: " << Arg2.getX() << std::endl;
	std::cout << "Sum: " << Sum(Arg1.getX(), Arg2.getX()) << std::endl;
	std::cout << "Minus: " << Minus(Arg1.getX(), Arg2.getX()) << std::endl;
}

double Sum(double one, double two) {
	return one + two;
}

double Minus(double one, double two) {
	return one - two;
}

//Task 2
void h9_task2() {
	system("cls");
	struct Complex {
	private:
		int real;
		int img;
	public:
		Complex() {
			real = 0;
			img = 0;
		}
		~Complex(){}

		int getReal() {
			return real;
		}
		int getImg() {
			return img;
		}
		void setReal(int number) {
			real = number;
		}
		void setImg(int number) {
			img = number;
		}
	};

	Complex Comp1;
	Complex Comp2;

	Comp1.setReal(dist_9_2(gen2));
	Comp1.setImg(dist_9_2(gen2));
	Comp2.setReal(dist_9_2(gen2));
	Comp2.setImg(dist_9_2(gen2));

	std::cout << "First complex number: " << Comp1.getReal() << "+" << Comp1.getImg() << "i" << std::endl;
	std::cout << "Second complex number: " << Comp2.getReal() << "+" << Comp2.getImg() << "i" << std::endl;
	Sum_C(Comp1.getReal(), Comp1.getImg(), Comp2.getReal(), Comp2.getImg());
	Minus_C(Comp1.getReal(), Comp1.getImg(), Comp2.getReal(), Comp2.getImg());
}

void Sum_C(int one_r, int one_im, int two_r, int two_im) {
	std::cout << "Sum of " << one_r << "+" << one_im << "i" << " and " << two_r << "+" << two_im << "i" << " is " << (one_r + two_r) << "+" << (one_im + two_im) << "i" << std::endl;
}

void Minus_C(int one_r, int one_im, int two_r, int two_im) {
	std::cout << "Difference of " << one_r << "+" << one_im << "i" << " and " << two_r << "+" << two_im << "i" << " is " << (one_r - two_r) << "+" << (one_im - two_im) << "i" << std::endl;
}


//Task 3
void h9_task3() {
	system("cls");
	struct Vector {
	private:
		int x;
		int y;

	public:
		Vector() {
			x = 0;
			y = 0;
		}
		~Vector() {}

		int getX() {
			return x;
		}
		int getY() {
			return y;
		}

		void setX(int coord) {
			x = coord;
		}
		void setY(int coord) {
			y = coord;
		}
	};
	Vector Vec1;
	Vector Vec2;

	//Vector 1 coordinates
	Vec1.setX(dist_9_2(gen2));
	Vec1.setY(dist_9_2(gen2));

	//Vector 2 coordinates
	Vec2.setX(dist_9_2(gen2));
	Vec2.setY(dist_9_2(gen2));

	std::cout << "Coordinates of first vector: [" << Vec1.getX() << ";" << Vec1.getY() << "]" << std::endl;
	std::cout << "Coordinates of second vector: [" << Vec2.getX() << ";" << Vec2.getY() << "]" << std::endl;
	Perpendicular(Vec1.getX(), Vec1.getY(), Vec2.getX(), Vec2.getY());
	Collinear(Vec1.getX(), Vec1.getY(), Vec2.getX(), Vec2.getY());

}

void Perpendicular(int x1, int y1, int x2, int y2) {
	int sum = 0;
	sum = x1 * y1 + x2 * y2;
	if (sum == 0) {
		std::cout << "This Vectors are Perpendicular!" << std::endl;
	}
	std::cout << "This Vectors arent Perpendicular!" << std::endl;
}

void Collinear(int x1, int y1, int x2, int y2) {
	if (x1 / x2 == y1 / y2) {
		std::cout << "This Vectors are Collinear!" << std::endl;
	}
	std::cout << "This Vectors arent Collinear!" << std::endl;
}

//Task 4
void h9_task4() {
	system("cls");
	struct Point {
	private:
		int x;
		int y;
		int z;

	public:
		Point() {
			x = 0;
			y = 0;
			z = 0;
		}
		~Point(){}

		int getX() { return x; }
		int getY() { return y; }
		int getZ() { return z; }

		void setX(int coord) { x = coord; }
		void setY(int coord) { y = coord; }
		void setZ(int coord) { z = coord; }
	};

	Point Coord;

	Coord.setX(dist_9_2(gen2));
	Coord.setY(dist_9_2(gen2));
	Coord.setZ(dist_9_2(gen2));

	std::cout << "You created point 1 with coordinates [" << Coord.getX() << ";" << Coord.getY() << ";" << Coord.getZ() << "]" << std::endl;

	Point Coord2;

	Coord2.setX(dist_9_2(gen2));
	Coord2.setY(dist_9_2(gen2));
	Coord2.setZ(dist_9_2(gen2));

	std::cout << "You created point 2 with coordinates [" << Coord2.getX() << ";" << Coord2.getY() << ";" << Coord2.getZ() << "]" << std::endl;

	std::cout << "Distance between point 1 and point 2 is: " << Dist(Coord.getX(), Coord.getY(), Coord.getZ(), Coord2.getX(), Coord2.getY(), Coord2.getZ()) << std::endl;

	std::cout << "Distance between point 1 and origin is: " << Dist(Coord.getX(), Coord.getY(), Coord.getZ()) << std::endl;
	std::cout << "Distance between point 2 and origin is: " << Dist(Coord2.getX(), Coord2.getY(), Coord2.getZ()) << std::endl;
}

double Dist(int x1, int y1, int z1, int x2, int y2, int z2) {
	double distance = sqrt(pow(x2-x1, 2)+ pow(y2 - y1, 2)+ pow(z2 - z1, 2));
	return distance;
}

double Dist(int x, int y, int z) {
	double distnace = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	return distnace;
}