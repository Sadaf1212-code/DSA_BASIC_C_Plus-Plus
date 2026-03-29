#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
  
    // Method 1: Compare first two numbers
    int mn1 = min(a, b);
    int mx1 = max(a, b);

    cout << "Min of a,b: " << mn1 << endl;
    cout << "Max of a,b: " << mx1 << endl;

    // Method 2: Compare all numbers
    int mn = min({a, b, c, d});
    int mx = max({a, b, c, d});

    cout << "Overall Min: " << mn << endl;
    cout << "Overall Max: " << mx << endl;

    return 0;
}
