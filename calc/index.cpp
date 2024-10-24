#include <iostream>
#include "functions.cpp"

using std::cin;
using std::cout;

int main(int argc, char const *argv[])
{
    /* U must declare the return's type, 
    "*" tells that the array is for pointers
    and u've to specify the function's arguments,
    that's because the function's type must be known exactly
    */
    double (*operations[4])(double, double) = {sum, minus, multiply, divide};

    bool exit;

    do
    {
        cout << "What op u want to do?" << std::endl;
        cout << "-Sum(1)\n-Minus(2)\n-Multiply(3)\n-Divide(4)\nOther to exit" << std::endl;

        // <op> is the number of the operation to do
        int op;
        cin >> op;

        // If <op> isn't 1,2,3 or 4 the program'll close
        exit = (op < 1 | op > 4) ? false : true;

        if (exit)
        {
            double num1, num2;

            // Ask for the first number
            cout << ">";
            cin >> num1;

            // Ask for the second number
            cout << ">";
            cin >> num2;

            // Like the array is from 0 to 3, we've to increment once <op>
            op--;

            // Call to the function and return the result
            double res = operations[op](num1, num2);

            cout << "The result is: " << res << "\n" << std::endl;
        }
    } while (exit);

    return 0;
}
