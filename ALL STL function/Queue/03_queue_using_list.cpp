#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        if(!l.empty())
        {
            l.pop_front();
        }
    }

    int front()
    {
        if(l.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myQueue q;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
