#include "test.h"

using namespace std;
using namespace about_product;

void Product::input() {
	cout << "��ǰ �Ϸù�ȣ: ";
	cin >> id;
	cout << "��ǰ �̸�: ";
	cin >> name;
	cout << "��ǰ ����: ";
	cin >> price;
}

void Product::print() {
	cout << "��ǰ ��ȣ: " << id << endl
		<< "��ǰ �̸�: " << name << endl
		<< "��ǰ ����: " << price << endl;
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
		cout << "�� �� �Դϴ�." << endl;
	}
	else {
		p2.print();
		cout << "�� �� �Դϴ�." << endl;
	}
	return 0;
}