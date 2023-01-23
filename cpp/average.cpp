#include <iostream>
using namespace std;

int main()
{
    int A[20], avg, limit, sum = 0;
    cout << "Enter The Limit \n";
    cin >> limit;
    cout << "Enter" << limit << "Elements \n";

    for (int i = 0; i < limit; i++)
    {
        cin >> A[i];
        sum = sum + A[i];
    }

    avg = sum / limit;
    cout << "\n The Avg Is " << avg;
    return 0;
}