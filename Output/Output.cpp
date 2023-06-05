#include <iostream>

int main()
{
    std::cout << "Hello"; // These back slashes will render this text unreadably and won't be displayed or cause and error.
    std::cout << "Hello" << '\n'; // This is not on a new line.
    std::cout << "Hello" << '\n'; // This will be on a new line.
}

