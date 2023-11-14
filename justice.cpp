#include "test.h"

using namespace std;
using namespace about_product;

void Product::input() {
	cout << "상품 일련번호: ";
	cin >> id;
	cout << "상품 이름: ";
	cin >> name;
	cout << "상품 가격: ";
	cin >> price;
}

void Product::print() {
	cout << "상품 번호: " << id << endl
		<< "상품 이름: " << name << endl
		<< "상품 가격: " << price << endl;
}

bool Product::isCheaper(Product other) {
	if (price < other.price)
		return true;
	else
		return false;
}

int start() {
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