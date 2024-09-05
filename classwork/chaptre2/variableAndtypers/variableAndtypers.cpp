//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to Fi variableAndtypers.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
//Declare variables - fields

struct Point
{
    //Declare variables - fields
    int X;
    int Y;
};

//Entry point

int main()
{

    //cout << E
    // std::= new line, only works with cout
    //output a message - 1
    std::cout << "hello world" << std::endl;
    //message -2
    std::cout << "hello" << "  " << "world" << std::endl;

    //message - 3
    std::cout << "hello";
    std::cout << " ";
    std::cout << "hello";
    std::cout << std::endl;

    //message -4
    std::cout << "hello world\n";

    std::cout << "hello \Bob\"";


    //file paths
    std::cout << "C:windows\temp";
    //std::cout << R"C:\windows\temp";


    //variables - named memory location to store data
    // Scope - lifetime of  a variable/identifier: point of declaration to end of block

    //Declaration - tell compiler a variable exists
    int length;
    length = 0;
    int releaseyear = 1900;
    int reting = 3, stars = 5;


    std::cout << length;
    std::string name;

//string stuff 

 //not aprimitve
 // doesn't work outside c++     
    std::string message = "hello";
    message = message + " world";
    message = message + " " + name;


    std::string empty;
    empty = empty + "hello";
    // combination operators
    // V op= E
    empty += "world"; // empty = empty +"world"
    // C++ is strongly typped 
    int numner = 10;
    // number = "20"; // compiler error, cannot change typpe of variable


    // type inferencing (C++11)
    // auto: := compiler figures it out
    // only usable in variable decls and a few other places 
    // must use an init  expression when declaring the variable
    auto payrate = 45;    // double payrate = 45.6;
    // payrate = "45.6";
    double averagepayrate = 40 / payrate; 
    //Area of a circle = PI*r2
    double pi = 3.14159;
    double radius = 10;


    //literals expression = expression that is calculation at compile time, primitive
    // 4+5 * 8 = 44
    //literals are great unless you need them everywhere (constant-expression)
    //variables are better at reuse but may be accidentally changed
    double area = 3.14159 * radius * radius;
    area = pi * radius;
    //pi = 10; // Error

    //structure -a group of related data points
    //prompt user for a point
    int x, y;
    std::cout << "enter x value: ";
    x = 5;
    std::cout << "Entre Y value: ";
  

    //(5, 10)
    Point pt = {0};
    std::cout << "(" << pt.X << "," << pt.Y << ")";

   

    //
        
    
    

    std::cout << "(" << pt.X << "," << pt.Y << ")";
    //declares a point as an X and Y value
    

      //Declere variables



}