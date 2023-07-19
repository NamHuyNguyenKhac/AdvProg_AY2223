#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
double myCos(double x) {
    double cos = 1.0 - 1.0 / 2.0 * pow(x, 2) + 1.0 / 24.0 * pow(x, 4) - 1.0 / 720.0 * pow(x, 6);
    return cos;
}

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x){
    double sin = x - 1.0 / 6.0 * pow(x, 3) + 1.0 / 120.0 * pow(x, 5) - 1.0 / 5040.0 * pow(x, 7);
    return sin;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }
    double x0 = 10;
    double x1;
    for ( int i = 1; i <= 10; i++ )
    {
        x1 =  x0 - (x0 * x0 - x)/(2 * x0) ;
        x0 = x1;
    }
    return x1;
}
