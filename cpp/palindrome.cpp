#include <iostream>
using namespace std;

int main()
{
    int num, temp, rev = 0, current;
    cout << "Enter the number \t";
    cin >> num;

    temp = num;

    // Reversing Number
    while (temp > 0)
    {
        current = temp % 10;
        rev = rev * 10 + current;
        temp = temp / 10;
    }

    if (rev == num)
        cout << "Number is Palindrome";
    else
        cout << "Number is Not Palindrome";
    return 0;
}