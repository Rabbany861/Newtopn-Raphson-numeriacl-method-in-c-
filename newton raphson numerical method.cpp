#include <iostream>
#include <cmath>
using namespace std;

// Function for which we want to find the root
double f(double x)
{
    return x*x*x + x - 1;
}

// Derivative of the function f(x)
double f_prime(double x)
{
    return 3*x*x +1;
}

// Newton-Raphson method to find the root
void newtonRaphson(double x0, double tol)
{
    //double h = x0 - f(x0) / f_prime(x0);
    while (f(x0) >= tol)
    {
       double h = x0 - f(x0) / f_prime(x0);
        x0 =  h; // Update the guess
    }
     cout << "Root: " << x0 << endl;
}

int main()
{
    double initialGuess = 5.0; // Starting point for the method
    double tolerance = 0.0001; // Desired accuracy
    newtonRaphson(initialGuess, tolerance);
    return 0;
}
