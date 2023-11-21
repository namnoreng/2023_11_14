#include "justice.h"

using namespace std;
using namespace about_product;
using namespace about_caculation;
using namespace about_car;
using namespace about_date;

/*********************************************************************/

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

/*********************************************************************/

int about_caculation::start() {
	double d1, d2;

	cout << "***��Ģ���� ���α׷�***" << endl;
	cout << "�� �� �Է� :";
	cin >> d1 >> d2;

	Calculator ca;

	cout << d1 << "+" << d2 << "=" << ca.Sum(d1, d2) << endl;
	cout << d1 << "-" << d2 << "=" << ca.Sub(d1, d2) << endl;
	cout << d1 << "*" << d2 << "=" << ca.Mul(d1, d2) << endl;
	cout << d1 << "/" << d2 << "=" << ca.Div(d1, d2) << endl;

	return 0;
}

/*********************************************************************/

int about_car::Car::getSpeed() {
	return speed;
}

void about_car::Car::setSpeed(int s) {
	speed = s;
}

void about_car::Car::setSpeed(double s) {
	speed = (int)s;
}

int about_car::Car::getGear() {
	return gear;
}

void about_car::Car::setGear(int g) {
	gear = g;
}

string about_car::Car::getColor() {
	return color;
}

void about_car::Car::setColor(string c) {
	color = c;
}

void about_car::Car::speedUp() {
	speed += 10;
}

void about_car::Car::speedDown() {
	speed -= 10;
}

void about_car::Car::init(int s, int g, string c) {
	speed = s;
	gear = g;
	color = c;
}

void about_car::Car::show() {
	cout << "===============================\n"
		<< "�ӵ�:" << speed << endl
		<< "���:" << gear << endl
		<< "����:" << color << endl
		<< "===============================\n";
}

int about_car::start() {
	Car car1, car2, myCar;
	int select;
	
	cout <<"[0] �ߺ� ���ǿ� ���� ���� �׽�Ʈ\n"
		<<"[1] �������� �ӵ� �Է� �� ��\n"
		<<"��� ����� ���?\n";

	cin >> select;

	switch (select) {
		case 0:
			myCar.setSpeed(80);
			cout << "���� �ӵ�:" << myCar.getSpeed() << endl;
			myCar.setSpeed(100.0);
			cout << "���� �ӵ�:" << myCar.getSpeed() << endl;
			break;
		case 1:
			srand(time(NULL));
			while (!_kbhit()) {
				car1.init(rand() % 200, 1, "red");
				car1.show();

				car2.init(rand() % 200, 1, "blue");
				car2.show();

				if (car1.getSpeed() > car2.getSpeed()) {
					cout << "car1 �¸� \n";
				}
				else {
					cout << "car2 �¸� \n";
				}
				Sleep(1000);
			}
			break;
		default:
			cout << "�Է� ����\n";
			break;
	}
	return 0;
}

/*********************************************************************/

int about_date::Date::getYear(){
	return year;
}

void about_date::Date::setYear(int y) {
	year = y;
}

int about_date::Date::getMonth() {
	return month;
}

void about_date::Date::setMonth(int m) {
	month = m;
}

int about_date::Date::getDay() {
	return day;
}

void about_date::Date::setDay(int d) {
	day = d;
}

void about_date::Date::print() {
	cout << year << "��" << month << "��" << day << "��" << endl;
}

int about_date::start() {
	Date date;
	date.setYear(2025);
	date.setMonth(11);
	date.setDay(20);
	date.print();
	return 0;
}
