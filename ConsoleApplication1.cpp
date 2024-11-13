// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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