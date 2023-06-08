#include <iostream>
using std::cout;

// This fuction simple adds two integer numbers together.
int add(int x, int y)
{
    return x + y;
}

//This function simple adds two double numbers together.
double add(double x, double y)
{
    return x + y;
}

int main()
{
    //This is were we are going to call our function.
    int total = add(3, 4);
    cout << "3 + 4 is " << total << '\n';

    //We call our function again to add some floating point numbers of type double.
    double another = add(1.2, 3.4);
    //This will cause a warning of value converstion from double to int.
    //These numbers will be truncated to 1 and 3.

    cout << '\n';
    cout << "1.2 + 3.4 is " << another;
    cout << '\n';

    return 0;
}