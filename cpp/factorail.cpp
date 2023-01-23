#include <iostream>
using namespace std;

int main()
{
    int num, fact = 1;
    cout << "\n Enter The Number";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "\n The Factorial of the given number is " << fact;
    return 0;
}