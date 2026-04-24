#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    stack<int> st;

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        if(empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        stack<int> newSt;
        int first;

        while(!st.empty())
        {
            int k = st.top();
            st.pop();

            if(st.empty())
            {
                first = k;
                break;
            }

            newSt.push(k);
        }

        while(!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }

        return first;
    }

    int peek()
    {
        if(empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        stack<int> newSt;
        int first;

        while(!st.empty())
        {
            int k = st.top();
            st.pop();

            if(st.empty())
            {
                first = k;
            }

            newSt.push(k);
        }

        while(!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }

        return first;
    }

    bool empty()
    {
        return st.empty();
    }
};

int main()
{
    MyQueue q;

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
        cout << q.peek() << endl;
        q.pop();
    }

    return 0;
}
