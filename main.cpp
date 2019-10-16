//CS 2024 -- A6
//Written by Oscar So (ons4)
//October 15, 2019

#include <iostream>
#include "MenuH.h"
#include "MenuItemH.h"

using namespace std;

//Print your name 3 times: printMyName
void printMyName()
{
	cout << "Hi, I'm Oscar!" << endl;
}

//Prompt the user for an integer and then print out the square of
//that number: squareANumber.
void squareANumber()
{
	cout << "Enter a number to be squared> ";
	int square;
	cin >> square;
	int total = square * square;
	cout << square << " squared is: " << total << endl;
}

int main(int argc, char *argv[])
{
	MenuItem menuItems[] = {MenuItem("Print My Name",'p'), MenuItem("Square a Number",'s'), MenuItem("Quit",'q')};
	Menu theMenu(menuItems,3);
	bool cont = true;
	while (cont == true)
	{
		theMenu.showMenu();
		switch (theMenu.promptUser())
		{
		case 'p':
			printMyName();
			break;
		case 's':
			squareANumber();
			break;
		case 'q':
			cout << "Quitting..." << endl;
			cont = false;
			break;
		case (-1):
			cout << "Unknown Item" << endl;
			break;
		}
	}
}