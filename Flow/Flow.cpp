#include <iostream>
using std::cout;
using std::cin;

int main()
{
    //Declared variables
    int firstNumber;
    int secondNumber;
    bool keepgoing = true;
    int answer;

    while(keepgoing)
    {
        //Write to screen for inputs
        cout << "Enter a Number: ";
        cin >> firstNumber;
        cout << "You entered " << firstNumber << ". Enter another number: ";
        cin >> secondNumber;

        //Check if first number is greater than second number.
        if (firstNumber < secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is less than the second number, " << secondNumber << '\n';
        }
        else
        {
            cout << "The first number, " << firstNumber << ", is equal to the second number, " << secondNumber << '\n';
        }
        if (firstNumber == secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is equal to the second number, " << secondNumber << '\n';
        }
        if (firstNumber > secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is greater than the second number, " << secondNumber << '\n';
        }
        for (int loop = 0; loop < 10; loop++)
        {
            cout << loop << " ";
        }
        cout <<  "Compare another pair? 0 means no, any other number means yrs: ";
        cin >> answer;
        if (answer == 0)
        {
            keepgoing = false;
        }        
    }
}