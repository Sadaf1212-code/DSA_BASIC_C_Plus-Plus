#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)
    {
        Node* newNode = new Node(val);
        sz++;

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        if(empty())
            return;

        Node* deleteNode = tail;
        tail = tail->prev;

        if(tail == NULL)
            head = NULL;
        else
            tail->next = NULL;

        delete deleteNode;
        sz--;
    }

    int top()
    {
        if(empty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    myStack st;

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
