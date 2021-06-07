#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Find square root of 'n' entered by the user.
    cout << "Program starts -->" << endl
         << endl;

    float n;

    cout << "Enter n: ";
    cin >> n;
    try
    {
        if (n < 0)
        {
            throw "The value of n must not be negative";
        }
        float result = sqrt(n);
        cout << "Result: " << result << endl
             << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl
             << '\n';
    }

    cout << "<-- Program ends" << endl;

    return 0;
}
