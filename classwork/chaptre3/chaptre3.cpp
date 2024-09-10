// chapter3.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>


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
}




