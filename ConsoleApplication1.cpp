/*  Project Name: Chapter 5 Exercise 23 - Pattern Display
    File Name: ConsoleApplication1.cpp
    Programmer: Harrison Hudgins
    Date: November 13, 2024
    Requirements:
    Write a program that displays pattern A and then pattern B
*/

#include <iostream>
using namespace std;


int loopsB = 0;

int main()
{
    for (int loopsA = 0; loopsA < 10; loopsA++) {
        for (int interLoopsA = 0; interLoopsA <= loopsA; interLoopsA++) {
            cout << '+';
        }
        cout << endl;
    }
    for (int loopsB = 10; loopsB >= 0; loopsB--) {
        for (int interLoopsB = 0; interLoopsB < loopsB; interLoopsB++) {
            cout << '+';
        }
        cout << endl;
    }
}
