#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // Input size

    int a[n];

    // Input array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Built-in sort (ascending)
    sort(a, a + n);

    // Output sorted array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
