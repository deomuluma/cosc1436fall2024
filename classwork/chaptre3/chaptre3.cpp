// chapter3.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <cmath> //C math functions
#include <iomanip> //Formatted output

//Include the std namespace so we don't have to prefix it on everything
using namespace std;


int main()
{
    std::cout << "Hello World!\n";


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. 
// In the future, to open this project again, go to File > Open > Project and select the .sln file





//Get user's name
    std::string name;
    std::cout << "Enter your name: ";

    // std::cin >> V
    // Inserts value up to first whitespace into variable
    // Doesn't work with spaced strings
    //std::cin >> name;
    std::getline(std::cin, name);

    std::cout << "Hello " << name << std::endl;

    int hours;
    std::cout << "How many hours did you work this week? ";
    std::cin >> hours;

    double payRate;
    std::cout << "How much do you earn an hour? ";
    std::cin >> payRate;

    std::cout << "You earned $" << (hours * payRate) << " this week" << std::endl;

    //Multi-value input, values are whitespace separated
    int x, y;
    std::cout << "Enter the X,Y values of a point: ";
    std::cin >> x >> y;


    //Type coercion - Compiler changes type of expression
    // No impact on runtime code generation
        // Always safe
        // Only impacts current expression
        // Type hierarchy
        //  //   float
        //   unsigned long
        //   long
        // //   unsigned int
        //   int
        //   char/short/unsigned short (automatic to int)

        // double = int * double
        // double = double * double (type coercion)
        // double = double
    double result = hours * payRate;


    //Precedence rules don't apply, just find the largest type
        // double + float * int => double

        //Assignment doesn't matter, types determined on each type of eeach side of operator
        // double = int * float


     //Overflow and underflow
    short smallValue = 32767 + 1; //Overflow
    std::cout << smallValue << std::endl;

    short largeValue = -32768 - 1; //Underflow
    std::cout << largeValue << std::endl;


    float floatValue = 1e38 * 2e20;
    std::cout << floatValue << std::endl;


     //Typecasting - you convert an expression to another type explicitly
    int totalSales = 50000;
    int departments = 8;

     // static_cast<T>(E) => preferred
    //   // (T)E => C-style, not recommended
    //   Must be allowable
    //double averageSalesPerDepartment = static_cast<double>(totalSales) / departments;
    double averageSalesPerDepartment = totalSales / static_cast<double>(departments);
     //Compiler error, cannot convert from string to int
    std::string someString = "Hello";
    //int someStringNumber = static_cast<int>(someString);
     //Use cast to truncated data w/o compiler warning
    int truncatedValue = static_cast<int>(floatValue);

      //Math functions
    // pow(x, y) => x to the y power
    // sqrt(x) => square root of x
    // exp(x) => e to the x power
    // log(x) => log of x  log(exp(x)) = x
    // sin(x), cos(x), tan(x), cot(x), sec(x), csc(x), ...h
    // abs(x) => positive value of x
    double xValue = 45.6;
    double mathResult;

    std::cout << pow(xValue, 2);  //xValue * xValue
    std::cout << sqrt(xValue);

    std::cout << exp(2);  // e nth power, e = 2.718
    std::cout << log(5.4);  // root of e


    std::cout << abs(-45);  // positive X = 45

    std::cout << ceil(xValue);     // 46
    std::cout << floor(xValue);    // 45

    std::cout << trunc(xValue);
    std::cout << round(xValue);   // 46

    //Formatted output
    std::cout << 4.567891241415151 << std::endl;
    std::cout << 5.67e3 << std::endl;

     // Create a table
    // Manipulator | behavior | Persist
    // --------
    //  setw(i) | pads the value to i | No
    //  left | Left justifies | Yes
    //  right | Right justifies (default) | Yes
    
    cout << left << setw(8) << "Student" << setw(6) << "Grade" << setw(6) << "Letter" << endl;
    cout << setw(20) << setfill('-') << "" << setfill(' ') << endl;
    //cout << fixed;
    cout << setprecision(2);
    cout << setw(8) << "Bob" << setw(6) << 95.67 << "A" << endl;
    cout << setw(8) << "Sue" << setw(6) << 98.543 << "A" << endl;
    cout << setw(8) << "Jim" << setw(6) << 84.567 << "B" << endl;
    cout << setw(8) << "Jan" << setw(6) << 78.987 << "C" << endl;
}











    









    









