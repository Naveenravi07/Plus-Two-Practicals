#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter Three Numbers \n";
    cin >> num1 >> num2 >> num3;
    cout << "\n";
    if (num1 > num2 && num1 > num3)
        cout << num1 << " \t is the largest";
    else if (num2 > num3)
        cout << num2 << " \t is the largest";
    else
        cout << num3 << " \t is the largest ";

    return 0;
}