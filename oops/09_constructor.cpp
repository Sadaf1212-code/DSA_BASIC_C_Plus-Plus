#include <bits/stdc++.h>
using namespace std;

// Class with constructor
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Constructor
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    // Object creation using constructor
    Student rahim(29, 9, 5.00);
    Student karim(45, 10, 4.33);

    // Output
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}
