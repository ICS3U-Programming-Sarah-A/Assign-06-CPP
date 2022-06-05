// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 18th, 2022
// This program asks the user for the base and the height. It then calculates
// the volume & lateral surface area of the square pyramid & displays it to
// the user.
#include <iostream>
#include <list>
#include <string.h>

std::list<string> size;
char sizeOfStr(std::list<string> size) {
    std::list<string> listSize;
    for size.size(); {
        listSize.push_back(size.()size[counter]))
    }
    return listSize;
}


int main() {
    // declare variables & list
    std::string selector;
    std::string listStr;
    std::list<string> sizeOfString;
    std::list<string> elementSize;
    std::string finalList;
    
    // intro
	std::cout << "Today, you'll get to select whatever you'll like to complete.";
	std::cout << "Option 1: Determining the length of the elements in a list";
	std::cout << "Option 2: Removing duplicates in a list.";
	std::cout << "Please select either or";
	
	// selector
	std::cout <<  "Choose which game you'd like to execute (1, 2): ";
	std::cin >> selector;
	
	if (selector == "1") {
	    std::cout << "Enter a list of strings (ex hi, welcome): ";
	    std::cin >> listStr;
	    
	    // here's where u split (need to figure out)
	    // here.
	    for (string element : sizeOfString) {
	        elementSize.push_back(element);
	    }
	    finalList = sizeOfString(elementSize);
	    
	    std::cout << "The length of each string is: " << finalList;
	}
}