#include <iostream>
#include "manager.h"
using namespace std;

int main() {
	Manager man;
	man.showMenu();
	int choice = 0;
	while (1) {
		cout << "Choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 0:
			man.quit();
		default:
			system("cls");
			man.showMenu();
			break;
		}
	}
	
	return 0;
}