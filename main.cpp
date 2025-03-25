#include <iostream>
#include <limits>

int testFunc()
{
    std::cout << "Hello every one, welcome to my life";
}

int main()
{
    std::cout <<"Here is some text.";

    testFunc();

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}

