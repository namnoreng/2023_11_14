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