/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nicholas Rubio
 */

#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int getNum(string num) {
    int value;

    if (num == "1" || num == "one") {
        value = 1;
    }
    else if (num == "2" || num == "two") {
        value = 2;
    }
    else if (num == "3" || num == "three") {
        value = 3;
    }
    else if (num == "4" || num == "four") {
        value = 4;
    }
    else if (num == "5" || num == "five") {
        value = 5;
    }
    else if (num == "6" || num == "six") {
        value = 6;
    }
    else if (num == "7" || num == "seven") {
        value = 7;
    }
    else if (num == "8" || num == "eight") {
        value = 8;
    }
    else if (num == "9" || num == "nine") {
        value = 9;
    }
    else if (num == "0" || num == "zero") {
        value = 0;
    }
    else value = -1;

    return value;
}

int main() 
{
    bool inputCheck = false;
    string userNum1, userNum2;
    double num1, num2, result;
    char op;
    string fullOp;

    while (!inputCheck)
    {
        cout << "Please enter two single-digit numbers and an operation (i.e. 4 7 +): ";
        cin >> userNum1 >> userNum2 >> op;

        num1 = getNum(userNum1);
        num2 = getNum(userNum2);

        if (num1 < 0 || num1 >= 10 || num2 < 0 || num2 >= 10 )
        {
            cout << "Invalid input: Numbers must both be single digit" << endl;
        }
        else if (op != '+' && op != '-' &&  op != '*' && op != '/')
        {
            cout << "Invalid input: Operation must be +,-,*, or /" << endl;
        }
        else inputCheck = true;
    }

    if (op == '+') {
        result = num1 + num2;
        fullOp = "sum";
    }
    else if (op == '-') {
        result = num1 - num2;
        fullOp = "difference";
    }
    else if (op == '*') {
        result = num1 * num2;
        fullOp = "product";
    }
    else if (op == '/') {
        result = num1 / num2;
        fullOp = "quotient";
    }

    cout << "The " << fullOp << " of " << num1 << " and " << num2 << " is " << result << "." << endl;

    return 0;
}