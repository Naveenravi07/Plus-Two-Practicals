#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "\n Enter the number \n";
    cin >> num;

    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }

    cout << "The sum of digits of the number is  " << sum;
    return 0;
}