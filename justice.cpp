#include "test.h"

using namespace std;
using namespace about_product;
using namespace about_caculation;

void about_product::Product::input() {
	cout << "��ǰ �Ϸù�ȣ: ";
	cin >> id;
	cout << "��ǰ �̸�: ";
	cin >> name;
	cout << "��ǰ ����: ";
	cin >> price;
}

void about_product::Product::print() {
	cout << "��ǰ ��ȣ: " << id << endl
		<< "��ǰ �̸�: " << name << endl
		<< "��ǰ ����: " << price << endl;
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
		cout << "�� �� �Դϴ�." << endl;
	}
	else {
		p2.print();
		cout << "�� �� �Դϴ�." << endl;
	}
	return 0;
}

int about_caculation::start() {
	while (1) {
		double d1, d2;

		cout << "***��Ģ���� ���α׷�***" << endl;
		cout << "�� �� �Է� :";
		cin >> d1 >> d2;

		Calculator ca;

		cout << d1 << "+" << d2 << "=" << ca.Sum(d1, d2) << endl;
		cout << d1 << "-" << d2 << "=" << ca.Sub(d1, d2) << endl;
		cout << d1 << "*" << d2 << "=" << ca.Mul(d1, d2) << endl;
		cout << d1 << "/" << d2 << "=" << ca.Div(d1, d2) << endl;
	}

	return 0;
}

