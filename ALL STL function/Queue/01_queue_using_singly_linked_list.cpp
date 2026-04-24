#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
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
        tail = newNode;
    }

    void pop()
    {
        if(empty()) return;

        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        sz--;

        if(head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        if(empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return head->val;
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
    myQueue q;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    cout << q.size() << endl;
    cout << q.empty() << endl;

    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
