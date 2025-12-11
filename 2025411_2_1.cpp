#include <iostream>
using namespace std;

int main()
{

    int number, a;
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0)
    {
        a = number / 10;
        a = a * 10;
        a = number - a;
        cout << a;
        number = number / 10;
    }
    return 0;
}
