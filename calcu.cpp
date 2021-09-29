#include <iostream>

using namespace std;

int main()
{
	cout << "CALCULATOR BY JHAS GEROCHI" << endl;
    int firstNumber, secondNumber, sumOfTwoNumbers, diffOfTwoNmbers, prodOfTwoNumbers, quotientOfTwoNumbers, modOfTwoNUmbers;
    
    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second number: ";
    cin >> secondNumber;

    // sum of two numbers is stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    diffOfTwoNmbers = firstNumber - secondNumber;
    prodOfTwoNumbers = firstNumber * secondNumber;
    quotientOfTwoNumbers = firstNumber / secondNumber;
    modOfTwoNUmbers = firstNumber % secondNumber; 
    // Prints sum 
    cout << endl << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
    cout << endl << firstNumber << " - " <<  secondNumber << " = " << diffOfTwoNmbers;
	cout << endl << firstNumber << " x " <<  secondNumber << " = " << prodOfTwoNumbers;  
	cout << endl << firstNumber << " / " <<  secondNumber << " = " << quotientOfTwoNumbers; 
	cout << endl << firstNumber << " % " <<  secondNumber << " = " << modOfTwoNUmbers;          

	    return 0;
}
