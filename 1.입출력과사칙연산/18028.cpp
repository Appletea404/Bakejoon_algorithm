#include <iostream>

using namespace std;

int main()
{   
    int16_t year;
    cin >> year;
    if (year < 1000 || year > 3000)
    {
        return 0;
    }
    else
    {
        cout << year-543 << endl;
    }
    
    return 0;
}