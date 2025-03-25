#include <iostream>
#include <limits>

int main()
{
    std::cout <<"Here is some text.";

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}