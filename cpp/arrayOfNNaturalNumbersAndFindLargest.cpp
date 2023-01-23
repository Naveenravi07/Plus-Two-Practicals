#include <iostream>
using namespace std;

int main()
{
    int A[20], limit, largest;

    cout << " \n Enter The Limit \n";
    cin >> limit;

    cout << "Enter " << limit << "  elements into the array";
    // Inserting elements into array
    for (int i = 0; i < limit; i++)
    {
        cin >> A[i];
    }

    // Finding largest
    largest = A[0];
    for (int i = 0; i < limit; i++)
    {
        if (A[i] > largest)
            largest = A[i];
    }
    cout << "Largest Element In The Array Is" << largest;

    return 0;
}