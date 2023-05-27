/**
 *    @file: triangle_area.cpp
 *  @author: Adam Ehlers
 *    @date: 05/27/2023
 *   @brief: This program will calculate the area of a triangle when three inputs are provided for the lengths of all the sides. If the sum of any two sides is greater than the third, the triangle is valid. The program will keep running until the user decides to quit.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool quit_code_flag = false;


double triangle_calculation(double side_a, double side_b, double side_c){
    if (side_a + side_b > side_c){
        double s = (side_a + side_b + side_c)/2;
        double area = sqrt(s * (s - side_a) * (s - side_b) * (s - side_c));
        cout << "Area: " << area << " Units" << endl;
        return area;
    }
    else{
        cout << "Error: THe sum of the first two sides is not larger than the third side" << endl;
        return 1; ///Break statement instead??
    }

}


int main() {
    double first_side;
    double second_side;
    double third_side;
    ///while (quit_code_flag == false){
    do{
        cout << "Enter first side value (Enter Q to quit): ";
        cin >> first_side;
        
        if (cin.fail()) {
            cin.clear();
            string character;
            cin >> character;
            if (character == "Q" || character == "q"){
                cout << "Exiting code...";
                quit_code_flag = true;
                break;
            }
        }

        cout << "Enter second side value (Enter Q to quit): ";
        cin >> second_side;
        cout << "Enter third side value (Enter Q to quit): ";
        cin >> third_side;

        triangle_calculation(first_side, second_side, third_side);

    }
    while (quit_code_flag == false);

    return 0;
}
