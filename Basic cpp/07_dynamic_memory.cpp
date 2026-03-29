#include <iostream>
using namespace std;
int main()
{
    // Dynamic memory allocation
    int *x = new int;

    *x = 10;

    cout << *x << endl;

    // Free memory (important)
    delete x;

    return 0;
}
