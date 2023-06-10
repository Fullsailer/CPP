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

//This is an example of an overloaded fuction
double add(double a, double b, double c)
{
    return a + b + c;
    //alternatively: reurn add(add(a,d),c);
    //This calls would call a 2 paramiter add 
}

bool test(bool x)
{
    return x;
}
bool test(double x)
{
    return x > 0;
}

int main()
{
    //This is were we are going to call our function.
    int total = add(3, 4);
    cout << "3 + 4 is " << total << '\n';

    //We call our function again to add some floating point numbers of type double.
    double another = add(1.2, 3.4);
    //This will cause a warning of value converstion from double to int if we use the intger add function.
    //These numbers will be truncated to 1 and 3.
    //So we need our double add function to add the two floating point numbers.

    cout << '\n';
    cout << "1.2 + 3.4 is " << another;
    cout << '\n';

    auto totalofthree = add(1.1, 2.2, 3.3);
    cout << "1.1 + 2.2 + 3.3 is " << totalofthree;
    cout << '\n';

    add(0, 0, 0);

    if (test(true))
    {
        cout << "true passes the test" << '\n';
    }
    if (test(3.2))
    {
        cout << "3.2 passes the test" << '\n';
    }

    //This erros out becuase the compiler does know witch method to use.
    //Could cover 3 to double or bool to fix this.
    // if (test(3))
    // {
    //     cout << "3 passes the test" << '\n';
    // }
    
    
    

    return 0;
}