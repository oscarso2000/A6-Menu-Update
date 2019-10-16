//CS 2024 -- A6
//Written by Oscar So (ons4) 
//October 15, 2019


#include <iostream>
#include <vector>
#include "MenuH.h"
#include "MenuItemH.h"
using namespace std;

Menu::Menu(MenuItem a[], int i){
	mSize = i;
	itemStack.assign(a, a + i);
}


void Menu::showMenu(){
	cout << "MENU" << endl;
	cout << "====" << endl;
	for(MenuItem i : itemStack){
  		i.display();
	}
}

char Menu::promptUser(){
	cout << "Enter Choice> ";
	char choice;
	cin >> choice;
	bool check = false;
	for(MenuItem i : itemStack){
  		if (choice == i.getPromptChar()){
			check = true;
		}
	}
	if (check == true) {
		return choice;
	}else{
		return -1;
	}
}

