#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if(a.marks > b.marks)
        {
            return true;
        }
        else if(a.marks < b.marks)
        {
            return false;
        }
        else
        {
            return a.roll > b.roll;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    for(int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;

        Student obj(name, roll, marks);
        pq.push(obj);
    }

    while(!pq.empty())
    {
        Student topStudent = pq.top();

        cout << topStudent.name << " "
             << topStudent.roll << " "
             << topStudent.marks << endl;

        pq.pop();
    }

    return 0;
}
