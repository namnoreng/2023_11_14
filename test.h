#include <iostream>
#include <string>

using namespace std;

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

void Selection();