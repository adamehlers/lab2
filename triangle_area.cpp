/**
 *    @file: triangle_area.cpp
 *  @author: Adam Ehlers
 *    @date: 05/27/2023
 *   @brief: This program will calculate the area of a triangle when three inputs are provided for the lengths of all the sides. If the sum of any two sides is greater than the third, the triangle is valid. The program will keep running until the user decides to quit.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

bool quit_code_flag = false;


double triangle_calculation(double side_a, double side_b, double side_c){
    if (side_a + side_b > side_c && side_b + side_c > side_a && side_a + side_c > side_b){
        double s = (side_a + side_b + side_c)/2;
        double area = sqrt(s * (s - side_a) * (s - side_b) * (s - side_c));
        cout << "Area: " << fixed << setprecision(2) << area << " Units" << endl;
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

    do{
        cout << "Enter first side value: ";
        cin >> first_side;
        cout << "Enter second side value: ";
        cin >> second_side;
        cout << "Enter third side value: ";
        cin >> third_side;

        triangle_calculation(first_side, second_side, third_side);
        
        cout << "Would you like to continue? (Y/n) ";
        string user_decision;
        cin >> user_decision;
        if (user_decision == "N" || user_decision == "n"){
            cout << "Exiting code..." << endl;
            quit_code_flag = true;
        }
        else{
            continue;
        }
    }
    while (quit_code_flag == false);

    return 0;
}
