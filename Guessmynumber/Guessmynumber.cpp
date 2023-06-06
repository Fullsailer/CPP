#include <iostream>
using std::cout;
using std::cin;

int main()
{
    //Declared variables
    int answer = 3; 
    int guess;
    bool notguessed = true;

    while(notguessed)
    {
        
        cout << "Guess my Number: ";
        cin >> guess;

        //Check if number is answer.
        if (guess == answer)
        {
            cout << "Yes! " << '\n';
            notguessed = false;
        }
        if (guess < answer)
        {
            cout << "Too low..." << '\n';
        }
        if (guess > answer)
        {
            cout << "Too high..." << '\n';
        }  
    }
    return 0;
}