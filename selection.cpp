#include "justice.h"

using namespace std;

void Selection() {
	int number;
	while (1) {
			cout << "[0] about_product\n"
				<< "[1] about_caculation\n"
				<<"[2] about_car\n"
				<<"[3] about_date\n"
				<< "���� ���α׷� ��ȣ: ";
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
				break;
			}
			case 2: {
				using namespace about_car;
				start();
				break;
			}
			case 3: {
				using namespace about_date;
				start();
				break;
			}
			default: {
				cout << "�ٽ� �Է��Ͻÿ�\n";
				break;
			}
		}
		system("pause");
		system("cls");
	}
}