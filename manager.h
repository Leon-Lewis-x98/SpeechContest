#pragma once
#include "speaker.h"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

const int MAXNUM = 6;

class Manager {
public:
	Manager();
	~Manager();
	void showMenu();
	void quit();
	void init();

	vector<int> id;
	map<int, Speaker> mp;
};
