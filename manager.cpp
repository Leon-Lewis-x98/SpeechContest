#include "manager.h"

Manager::Manager() {

}

Manager::~Manager() {

}

void Manager::showMenu() {
	cout << "-------------------------------" << endl;
	cout << "Welcome to Speech Contest:" << endl;
	cout << "1.Start" << endl;
	cout << "2.Record" << endl;
	cout << "3.Clear" << endl;
	cout << "0.Quit" << endl;

}

void Manager::quit() {
	cout << "Bye!" << endl;
	exit(0);
}

void Manager::init() {
	string name = "	Speaker";
	for (int i = 0; i < MAXNUM; i++) {
		name += 'A' + i;
		Speaker sp;
		sp.m_Name = name;
		sp.m_Score = 0;

		this->id.push_back(i);
		this->mp.insert(make_pair(i, sp));
	}
}