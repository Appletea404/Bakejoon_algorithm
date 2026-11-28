#include <iostream>

int main ()
{
    int32_t var1, var2, rslt;
    int32_t arg1[3] = {0};
    int32_t arg2[3] = {0};
    
    std::cin >> var1 >> var2;
    arg2[2] = var2 / 100;
    arg2[1] = (var2 % 100) /10;
    arg2[0] = var2 % 10;

    arg1[0] = var1 * arg2[0];
    arg1[1] = var1 * arg2[1];
    arg1[2] = var1 * arg2[2];

    rslt = arg1[0] + (arg1[1] * 10) + (arg1[2] * 100);

    std::cout << arg1[0] << std::endl;
    std::cout << arg1[1] << std::endl;
    std::cout << arg1[2] << std::endl;
    std::cout << rslt << std::endl;


    return 0;
}