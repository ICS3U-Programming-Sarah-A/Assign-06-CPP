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
#include <sstream>
#include <vector>

std::list<int> sizeOfStr(std::list<std::string> size) {
    std::list<int> listSize;
    int temp = -1;
    // for (int counter = 0; listSize < size; counter++) {
    for (std::string element : size) {
    	temp = element.size();
        listSize.push_back(temp);
        // push_back(size[counter]));
    }
    return listSize;
}


int main() {
    // declare variables & list
    std::string selector;
    std::string listStr;
    std::list<int> sizeOfString;
    std::list<std::string> elementSize;
    std::list<int> finalList;
    int element;																	
    
    // intro
	std::cout << "Today, you'll get to select whatever you'll like to complete.";
	std::cout << std::endl;
	std::cout << "Option 1: Determining the length of the elements in a list.";
	std::cout << std::endl;
	std::cout << "Option 2: Removing duplicates in a list.\n";
	std::cout << "Please select either or";
	
	// selector
	std::cout <<  "Choose which game you'd like to execute (1, 2): ";
	std::cout << std::endl;
	std::cin >> selector;
	
	if (selector == "1") {
	    std::cout << "Enter a list of strings (ex hi, welcome): ";
	    std::getline(std::cin, listStr);
	    
	    for (std::string)
	    // here's where u split (need to figure out)
	    // here.
	    for (int element : listStr) {
	        elementSize.push_back(element);
	    }
	    
	    finalList = sizeOfStr(elementSize);
	    
	    for (int sizeOfString : finalList) {
	    	 std::cout << "The length of each string is: " << sizeOfString;
	    }
	  
	} else if (selector == "2") {
		std::string userStr;
		// get user input
		std::cout << "Enter a list of elements: ";
		std::getline(std::cin, userStr);
		
	}
}