#include <iostream>
#include <limits>

// int testFunc()
// {
//     std::cout << "Hello every one, welcome to my life";
// }

int main()
{
    std::cout << "Enter two numbers separated by a space: "; // ask user for a number

    int x = 0;
    int y = 0;
           // define variable x to hold user input (and value-initialize it)
    std::cin >> x >> y; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << " and " << y << '\n';
    return 0;
}

