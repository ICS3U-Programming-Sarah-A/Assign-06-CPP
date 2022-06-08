// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: June 4th, 2022
// This program asks the user to enter a string. It then uses a function to
// determine length string of each word the user has entered.
#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <vector>
#include <array>

// this function determines the length of the strings
std::list<int> sizeOfStr(std::list<std::string> size) {
    std::list<int> listSize;
    int temp = -1;
    for (std::string element : size) {
        temp = element.size();
        listSize.push_back(temp);
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

    // intro
    std::cout << "Today, you'll be "
                 "determining the length of the elements in a list.";
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Enter a list of strings (ex hi, welcome): ";

    // get user input
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
}
