#include "justice.h"

using namespace std;
using namespace about_product;
using namespace about_caculation;
using namespace about_car;
using namespace about_date;

/*********************************************************************/

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

/*********************************************************************/

int about_caculation::start() {
	double d1, d2;

	cout << "***사칙연산 프로그램***" << endl;
	cout << "두 수 입력 :";
	cin >> d1 >> d2;

	Calculator ca;

	cout << d1 << "+" << d2 << "=" << ca.Sum(d1, d2) << endl;
	cout << d1 << "-" << d2 << "=" << ca.Sub(d1, d2) << endl;
	cout << d1 << "*" << d2 << "=" << ca.Mul(d1, d2) << endl;
	cout << d1 << "/" << d2 << "=" << ca.Div(d1, d2) << endl;

	return 0;
}

/*********************************************************************/
Car::Car() {
	speed = 0;
	gear = 1;
	color = "white";
}

Car::Car(int s, int g, string c) {
	speed = s;
	gear = g;
	color = c;
}

int Car::getSpeed() {
	return speed;
}

void Car::setSpeed(int s) {
	speed = s;
}

void Car::setSpeed(double s) {
	speed = (int)s;
}

int Car::getGear() {
	return gear;
}

void Car::setGear(int g) {
	gear = g;
}

string Car::getColor() {
	return color;
}

void Car::setColor(string c) {
	color = c;
}

void Car::speedUp() {
	speed += 10;
}

void Car::speedDown() {
	speed -= 10;
}

void Car::init(int s, int g, string c) {
	speed = s;
	gear = g;
	color = c;
}

void Car::show() {
	cout << "===============================\n"
		<< "속도:" << speed << endl
		<< "기어:" << gear << endl
		<< "색상:" << color << endl
		<< "===============================\n";
}

int about_car::start() {
	Car car1, car2, myCar;
	int select;
	
	cout <<"[0] 중복 정의에 대한 동작 테스트\n"
		<<"[1] 랜덤으로 속도 입력 및 비교\n"
		<<"[2] 중복 정의를 이용한 기본값 설정 테스트\n"
		<<"어느 기능을 사용?\n";

	cin >> select;

	switch (select) {
		case 0:
			myCar.setSpeed(80);
			cout << "차의 속도:" << myCar.getSpeed() << endl;
			myCar.setSpeed(100.0);
			cout << "차의 속도:" << myCar.getSpeed() << endl;
			break;
		case 1:
			srand(time(NULL));
			while (!_kbhit()) {
				car1.init(rand() % 200, 1, "red");
				car1.show();

				car2.init(rand() % 200, 1, "blue");
				car2.show();

				if (car1.getSpeed() > car2.getSpeed()) {
					cout << "car1 승리 \n";
				}
				else {
					cout << "car2 승리 \n";
				}
				Sleep(1000);
			}
			break;
		case 2: {
			Car c1;
			Car c2(0, 1, "blue");
			c1.show();
			c2.show();
		}
			break;
		default:
			cout << "입력 오류\n";
			break;
	}
	return 0;
}

/*********************************************************************/

int Date::getYear(){
	return year;
}

void Date::setYear(int y) {
	year = y;
}

int Date::getMonth() {
	return month;
}

void Date::setMonth(int m) {
	month = m;
}

int Date::getDay() {
	return day;
}

void Date::setDay(int d) {
	day = d;
}

void Date::print() {
	cout << year << "년" << month << "월" << day << "일" << endl;
}

int about_date::start() {
	Date date;
	date.setYear(2025);
	date.setMonth(11);
	date.setDay(20);
	date.print();
	return 0;
}
