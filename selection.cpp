#include "test.h"

void Selection() {
	int number;
	cout << "실행 프로그램 번호: ";
	cin >> number;
	switch (number) {
		case 0: {
		using namespace about_product;
		start();
		break;
		}
		case 1: {
		using namespace about_caculation;
		start();
		}
	default: break;
	}
}