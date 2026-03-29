#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Constructor
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

// Function returning pointer
Student* fun()
{
    // Dynamic object creation
    Student* rahim = new Student(342, 5, 4.99);

    return rahim;
}

int main()
{
    // Receive pointer
    Student* ans = fun();

    // Access using pointer
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;

    delete ans; // free memory

    return 0;
}
