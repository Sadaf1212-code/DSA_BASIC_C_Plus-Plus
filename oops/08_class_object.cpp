#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a, b; // Two objects

    // Input for first object
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;

    getchar(); // ignore newline

    // Input for second object
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;

    // Output
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}
