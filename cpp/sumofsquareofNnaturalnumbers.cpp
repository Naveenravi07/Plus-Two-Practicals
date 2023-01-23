#include <iostream>
using namespace std;

int main()
{
    int i, num, sum = 0;
    cout << "Enter the number \n";
    cin >> num;

    for (i = 0; i <= num; i++)
        sum = sum + i;

    cout << "\n The Sum is " << sum;
    return 0;
}