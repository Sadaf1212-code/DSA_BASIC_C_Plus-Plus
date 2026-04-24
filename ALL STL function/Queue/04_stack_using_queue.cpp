#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    queue<int> q;

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        if(empty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        queue<int> newQ;
        int last;

        while(!q.empty())
        {
            int k = q.front();
            q.pop();

            if(q.empty())
            {
                last = k;
                break;
            }

            newQ.push(k);
        }

        q = newQ;
        return last;
    }

    int top()
    {
        if(empty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        queue<int> newQ;
        int last;

        while(!q.empty())
        {
            int k = q.front();
            q.pop();

            if(q.empty())
            {
                last = k;
            }

            newQ.push(k);
        }

        q = newQ;
        return last;
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    MyStack st;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
