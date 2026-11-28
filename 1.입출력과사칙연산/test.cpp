#include <iostream>

int main()
{
    int32_t test_arg = 0;
    std::cin >> test_arg;
    std::cout << (test_arg % 100) /10 << std::endl;
    return 0;
}