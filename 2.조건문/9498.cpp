#include <iostream>

int main ()
{
    int32_t test_rslt;
    std::cin >> test_rslt;
    if(test_rslt < 0 || test_rslt > 100)
    {
        return 0;
    }
    else if (test_rslt >= 90 && test_rslt <= 100)
    {
        std::cout << "A" << std::endl;
    }
    else if (test_rslt >= 80 && test_rslt <= 89)
    {
        std::cout << "B" << std::endl;
    }
    else if (test_rslt >= 70 && test_rslt <= 79)
    {
        std::cout << "C" << std::endl;
    }
    else if (test_rslt >= 60 && test_rslt <= 69)
    {
        std::cout << "D" << std::endl;
    }
    else
    {
        std::cout << "F" << std::endl;
    }
    return 0;
}