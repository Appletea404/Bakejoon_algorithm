#include <iostream>

int main()
{
    int a,b,c;
    std::cin >> a >> b >> c;
    if( a < 2 || b < 2 || c < 2 ||
    a > 10000 || b > 10000 || c > 10000)
    {
        return 0;
    }
    else
    {
        std::cout << (a+b) % c << std::endl;
        std::cout << ((a%c) + (b%c))%c << std::endl;
        std::cout <<  (a*b) % c << std::endl;
        std::cout <<  ((a % c) * (b % c)) % c << std::endl;
    }
    return 0;
}