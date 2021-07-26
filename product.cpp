#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, product;
    
    cout << "Enter two integers: \n";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    product = firstNumber * secondNumber;

    // Prints sum 
    cout << firstNumber << " * " <<  secondNumber << " = " << product;     

    return 0;
}