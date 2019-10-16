//CS 2024 -- A6
//Written by Oscar So (ons4) 
//October 15, 2019
#pragma once
#include <iostream>
#include <vector>
#include "MenuItemH.h"
using namespace std;



class Menu{
	public:
		Menu(MenuItem[], int);
		void showMenu();
		char promptUser();
	private:
		int mSize;
		vector<MenuItem> itemStack;
};


