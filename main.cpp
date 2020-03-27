#include <iostream>

using namespace std;

int main()
{
    float divident, divisor, quotient; //dzielna, dzielnik, iloraz
    try
    {
        cout << "Type a number you want to divide and a number you want to divide by: " << endl;
        cin >> divident >> divisor;
        if(divisor == 0)
            throw 2115;
        quotient = divident / divisor;
    }
    catch(int x)
    {
        cout << "Divisor cannot equal 0. You can't divide by zero, you moron. ERROR CODE: " << x << '\n';
    }
    cout << "result: " << quotient;

    return 0;
}
