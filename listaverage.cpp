// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on December 2019
// This program calculates the average of grades using list

#include <iostream>
#include <list>


int average(std::list<int> gradeList) {
    // this function calculates the average

    int total = 0;
    int counter = 0;
    float result = 0;

    for (int number : gradeList) {
        total += number;
        counter++;
    }
    result = total / counter;
    return result;
}


int main() {
    // This function gets the input and makes it ready to pass it to another
    //  function

    int grade = 0;
    int result = 0;
    std::string gradeStr;
    std::list<int> gradeList;
    
    // Input
    while (true) {
        std::cout << "please enter the grade: " << std::endl;
        std::cin >> gradeStr;
        if (gradeStr == "-1") {
            break;
        }
        try {
            grade = std::stoi(gradeStr);
        } catch(std::invalid_argument) {
            std::cout << "Wrong Input !!!" << std::endl;
            return 0;
        }
        if (grade >= 0 && grade <= 100) {
            gradeList.push_front(grade);
        }
    }
    // Passing to another function
    result = average(gradeList);
    // Output
    std::cout << "The average is: " << result << std::endl;
}
