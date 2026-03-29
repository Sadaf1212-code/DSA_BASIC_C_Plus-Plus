#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    cin.ignore(); // clear newline

    char s[100];

    // Take full line input (with spaces)
    cin.getline(s, 100);

    cout << a << endl;
    cout << s << endl;

    return 0;
}
