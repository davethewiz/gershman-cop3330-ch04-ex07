/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dave Gershman
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int StringToInt(string str) {
    int result = -1;
    if (str == "zero") result = 0;
    if (str == "one") result = 1;
    if (str == "two") result = 2;
    if (str == "three") result = 3;
    if (str == "four") result = 4;
    if (str == "five") result = 5;
    if (str == "six") result = 6;
    if (str == "seven") result = 7;
    if (str == "eight") result = 8;
    if (str == "nine") result = 9;
    
    if (result == -1 && str.length() == 1) {
        stringstream numString(str);
        numString >> result;
    }
    
    return result;
}

void DoOperation(int operand1, int operand2, string operation) {
    double result = 0;
    
    string operationName = "";
    if (operation == "+") {
        result = operand1 + operand2;
        operationName = "sum";
    }
    
    if (operation == "-") {
        result = operand1 - operand2;
        operationName = "difference";
    }
        
    if (operation == "*") {
        result = operand1 * operand2;
        operationName = "product";
    }
        
    if (operation == "/") {
        result = operand1 / operand2;
        operationName = "quotient";
    }
    
    cout << "The " << operationName << " of " << operand1 << " and " << operand2 << " is " << result << ".";
}

int main()
{
    string operand1String;
    string operand2String;
    
    cout << "Enter two single-digit integers as operands (can also be written out): ";
    cin >> operand1String >> operand2String;
    
    int operand1 = StringToInt(operand1String);
    int operand2 = StringToInt(operand2String);
    
    string operation;
    cout << "Enter an operation: ";
    cin >> operation;
    
    DoOperation(operand1, operand2, operation);
    
    return 0;
}











