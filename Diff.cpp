#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, DiffOfTwoNumbers;
    
    cout << "Enter two integers: \n";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    DiffOfTwoNumbers = firstNumber - secondNumber;

    // Prints sum 
    cout << firstNumber << " - " <<  secondNumber << " = " << DiffOfTwoNumbers;     

    return 0;
}