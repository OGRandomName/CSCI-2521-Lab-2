/**
 * @file Lab2_Kcherry8.cpp
 * @author Kenneth Cherry
 * @date 2026-9-10
 * @brief Calculate the perimeter of a rectangle from input.
 */
#include <iostream>
using namespace std;

int main() {
    double length;
    double width;
    double perimeter;

    cout << "This application will calculate the perimeter of a rectangle." << endl;
    cout << endl;

    cout << "Please enter the length of the rectangle: ";
    cin >> length;

    cout << "Please enter the width of the rectangle: ";
    cin >> width;

    perimeter = 2 * (length + width);

    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}