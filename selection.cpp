#include "test.h"

void Selection() {
	int number;
	cout << "���� ���α׷� ��ȣ: ";
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