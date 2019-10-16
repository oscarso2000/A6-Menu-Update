//CS 2024 -- A6
//Written by Oscar So (ons4)
//October 15, 2019

#include <iostream>
#include "MenuH.h"
#include "MenuItemH.h"
using namespace std;

MenuItem::MenuItem(string title, char prompt){
    mTitle = title;
    mPrompt = prompt;
}
char MenuItem::getPromptChar(){
    return mPrompt;
}
void MenuItem::display(){
    cout << mPrompt << ") " << mTitle << endl;
}
