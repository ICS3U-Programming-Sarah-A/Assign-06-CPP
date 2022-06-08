// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 18th, 2022
// This program asks the user for the base and the height. It then calculates
// the volume & lateral surface area of the square pyramid & displays it to
// the user.
#include <iostream>
#include <list>
#include <string>
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
	std::cout << "Today, you'll get to select whatever you'll like " 
	             "to complete.";
	std::cout << std::endl;
	std::cout << "Option 1: Determining the length of the elements in a list.";
	std::cout << std::endl;
	std::cout << "Option 2: Removing duplicates in a list.\n";
	std::cout << "Please select either or.";
	std::cout << std::endl;
	
	// selector
	std::cout << "Choose which game you'd like to execute (1, 2): ";
	std::cin >> selector;
	std::cout << std::endl;
	
	if (selector == "1") {
		std::cout << "Enter a list of strings (ex hi, welcome): ";
		
		// get user input
		std::cin.ignore();
	    getline(std::cin, listStr);
	   
	   // parse the string using a for each in loop
	   std::istringstream iss(listStr);
	   for (std::string listStr; iss >> listStr; ) {
	   	   elementSize.push_back(listStr);
	   }
	    // calls function
	    finalList = sizeOfStr(elementSize);
	    
	    // displays results to user
	    std::cout << "The length of each string is: ";
	    for (int sizeOfString : finalList) {
	    	std::cout << sizeOfString << " ";
	    }
	  
	} else if (selector == "2") {
		std::string userStr;
		// get user input
		std::cout << "Enter a list of elements: ";
		std::getline(std::cin, userStr);
		
	} else {
		std::cout << "Invalid enteries, please select either or.";
	}
}
