//CS 2024 -- A6
//Written by Oscar So (ons4) 
//October 15, 2019
#pragma once
#include <iostream>
using namespace std;

class MenuItem{
	public:
        MenuItem(string title, char prompt);
		char getPromptChar();
		void display();
    private:
        string mTitle;
        char mPrompt;
};