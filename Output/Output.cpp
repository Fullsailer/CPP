#include <iostream>
using std::cout;
using std::cin;

int main()
{
    std::cout << "Hello"; // These back slashes will render this text unreadably and won't be displayed or cause and error.
    std::cout << "Hello" << '\n'; // This is not on a new line.
    std::cout << "Hello" << '\n'; // This will be on a new line.

    //Just messing around with some numbers, math, and assigning varibales.
    cout << 34 << '\n';
    cout << '\n' << '\n';
    int i = 2 + 2;
    cout << i << '\n';
    i = i * 3;
    cout << i << '\n';
    //This would be a good point to introduce the debugger and step through the values of i.

    int j = 2;
    cout << j << '\n';

    i = 4.3; // double to an int conversion warning for this variable from 4.3 to 4
    //i = "hello"; // this won't be allowed, it will error, because it won't put strings into an int.
    j = 7 / 2; // no warning for this conversion from double to int???
    cout << i << " " << j << '\n';
    //Note compiler will not round a number but it truncates it or cut is off any extra.

    float f = 4.9;
    cout << f << '\n';

    f = 9 / 5; // this will be truncated down to 1 instead of 1.8
    //f = 9.0 / 5; // Changing this to a float will make it return 1.8 instead of 1.
    cout << f << '\n';

    cout << "Enter a number: "; // this will promt the user on the screen to input a number.
    cin >> i; //this will take that number and assign it to the variable i.
    cout << '\n' << i << '\n'; //we the return the value of i to the screen.
    //cout << '\n' << i*2 << '\n'; //this should print i multiplied by 2.
}

