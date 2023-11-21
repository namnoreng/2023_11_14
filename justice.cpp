#include "test.h"

using namespace std;
using namespace about_product;
using namespace about_caculation;

void about_product::Product::input() {
	cout << "상품 일련번호: ";
	cin >> id;
	cout << "상품 이름: ";
	cin >> name;
	cout << "상품 가격: ";
	cin >> price;
}

void about_product::Product::print() {
	cout << "상품 번호: " << id << endl
		<< "상품 이름: " << name << endl
		<< "상품 가격: " << price << endl;
}

bool about_product::Product::isCheaper(Product other) {
	if (price < other.price)
		return true;
	else
		return false;
}

int about_product::start() {
	Product p1, p2;
	p1.input();
	p2.input();
	if (p1.isCheaper(p2)) {
		p1.print();
		cout << "이 더 쌉니다." << endl;
	}
	else {
		p2.print();
		cout << "이 더 쌉니다." << endl;
	}
	return 0;
}

int about_caculation::start() {
	while (1) {
		double d1, d2;

		cout << "***사칙연산 프로그램***" << endl;
		cout << "두 수 입력 :";
		cin >> d1 >> d2;

		Calculator ca;

		cout << d1 << "+" << d2 << "=" << ca.Sum(d1, d2) << endl;
		cout << d1 << "-" << d2 << "=" << ca.Sub(d1, d2) << endl;
		cout << d1 << "*" << d2 << "=" << ca.Mul(d1, d2) << endl;
		cout << d1 << "/" << d2 << "=" << ca.Div(d1, d2) << endl;
	}

	return 0;
}

