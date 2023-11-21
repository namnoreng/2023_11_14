#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
#include <conio.h>

using namespace std;

void Selection();

namespace about_product{
	class Product {
		int id;
		string name;
		int price;
	public:
		void input();
		void print();
		bool isCheaper(Product other);
	};
	int start();
}

namespace about_caculation {
	class Calculator {
	public:
		double Sum(double d1, double d2) {
			return d1 + d2;
		}
		double Sub(double d1, double d2) {
			return d1 - d2;
		}
		double Mul(double d1, double d2) {
			return d1 * d2;
		}
		double Div(double d1, double d2) {
			return d1 / d2;
		}
	};
	int start();
}

namespace about_car {
	class Car {
		int speed;
		int gear;
		string color;
	public:
		int getSpeed();
		void setSpeed(int s);
		int getGear();
		void setGear(int g);
		string getColor();
		void setColor(string c);

		void speedUp();
		void speedDown();
		void init(int s, int gear, string c);
		void show();
	};
	int start();
}

namespace about_date {
	class Date {
		int year;
		int month;
		int day;
	public:
		int getYear();
		void setYear(int y);
		int getMonth();
		void setMonth(int m);
		int getDay();
		void setDay(int d);
		void print();
	};
	int start();
}

