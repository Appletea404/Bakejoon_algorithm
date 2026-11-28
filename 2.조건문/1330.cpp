#include <iostream>

using namespace std;

int main()
{
    int32_t A,B;
    cin >> A >> B;

    if(A < -10000 || B < -10000 || A > 10000 || B > 10000)
    {
        return 0;
    }
    else if (A > B)
    {
        cout << ">" << endl;
    }
    else if (A < B)
    {
        cout << "<" << endl;
    }
    else if (A == B)
    {
        cout << "==" << endl;
    }
    return 0;
}